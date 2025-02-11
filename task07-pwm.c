#include "pico/stdlib.h"
#include "hardware/pwm.h"

#define SERVO_GPIO 22   
#define LED_RGB 12     

#define PWM_FREQUENCY 50        
#define PWM_WRAP 20000          
#define PWM_DIVISOR 125      

#define SERVO_MIN_US 500        // 0°  (500µs)
#define SERVO_MID_US 1470       // 90° (1470µs)
#define SERVO_MAX_US 2400       // 180° (2400µs)
#define SERVO_STEP_US 5         // Passo de variação (5µs)
#define SERVO_DELAY_MS 10       // Atraso entre cada passo (10ms)

void set_servo_position(uint slice, uint level) {
    pwm_set_gpio_level(SERVO_GPIO, level);
}

uint16_t convert_us_to_pwm_level(uint16_t us) {
    return (us * PWM_WRAP) / 20000;  // microsegundos para nível PWM
}

int main() {
    stdio_init_all();
    
    // Configurar GPIO do servo como saída PWM
    gpio_set_function(SERVO_GPIO, GPIO_FUNC_PWM);
    uint slice_num = pwm_gpio_to_slice_num(SERVO_GPIO);
    
    // Configurar PWM com wrap e divisor
    pwm_config config = pwm_get_default_config();
    pwm_config_set_clkdiv(&config, PWM_DIVISOR);
    pwm_config_set_wrap(&config, PWM_WRAP);
    pwm_init(slice_num, &config, true);
   
    gpio_init(LED_RGB);
    gpio_set_dir(LED_RGB, GPIO_OUT);

    printf("Posição 180°\n");
    set_servo_position(slice_num, convert_us_to_pwm_level(SERVO_MAX_US));
    gpio_put(LED_RGB, 1);  
    sleep_ms(5000);
    
    printf("Posição 90°\n");
    set_servo_position(slice_num, convert_us_to_pwm_level(SERVO_MID_US));
    gpio_put(LED_RGB, 0);  
    sleep_ms(5000);

    printf("Posição 0°\n");
    set_servo_position(slice_num, convert_us_to_pwm_level(SERVO_MIN_US));
    gpio_put(LED_RGB, 1);  
    sleep_ms(5000);

    while (true) {
        printf("Movendo para 180°\n");
        for (uint16_t pos = SERVO_MIN_US; pos <= SERVO_MAX_US; pos += SERVO_STEP_US) {
            set_servo_position(slice_num, convert_us_to_pwm_level(pos));
            sleep_ms(SERVO_DELAY_MS);
        }
        gpio_put(LED_RGB, 0); 
        
        printf("Movendo para 0°\n");
        for (uint16_t pos = SERVO_MAX_US; pos >= SERVO_MIN_US; pos -= SERVO_STEP_US) {
            set_servo_position(slice_num, convert_us_to_pwm_level(pos));
            sleep_ms(SERVO_DELAY_MS);
        }
        gpio_put(LED_RGB, 1); 
    }
}
