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
