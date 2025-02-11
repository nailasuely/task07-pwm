<h1 align="center">
  <br>
    <img width="300px" src="https://github.com/nailasuely/task07-pwm/blob/main/src/logo.png">
  <br>
  Capítulo 7 - PWM
  <br>
</h1>
<div align="center">

<h4 align="center">Projeto da Residência Tecnológica em Sistemas Embarcados </h4>

<p align="center">
<div align="center">

[![MIT License](https://img.shields.io/badge/license-MIT-blue.svg)](https://github.com/nailasuely/task07-pwm/blob/main/LICENSE)

> Este projeto faz parte do Capítulo 7 - PWM da Residência Tecnológica em Sistemas Embarcados. Ele utiliza o módulo PWM do Raspberry Pi Pico W para controlar um servomotor e simular movimentos de 0° a 180°. O LED RGB (GPIO 12) varia sua intensidade de brilho conforme o movimento do servomotor, utilizando modulação de largura de pulso (PWM) para ajustes suaves.

## Download do repositório
<p align="center">
  
```
gh repo clone nailasuely/task07-pwm
```
</p>

</div>
</div>

<details open="open">
<summary>Sumário</summary>

- [📌 Requisitos](#-requisitos)
- [🔧 Componentes Utilizados](#-componentes-utilizados)
- [📂 Estrutura do Projeto](#-estrutura-do-projeto)
- [🚀 Como Executar](#-como-executar)
  - [✅ Pré-requisitos](#-pré-requisitos)
  - [📌 Passos para Execução](#-passos-para-execução)
- [🎥 Vídeo Demonstração](#-vídeo-demonstração)
- [👩‍💻 Autora](#-autora)
- [📚 Referências](-referencias).

</details>

![---](https://github.com/nailasuely/task07-pwm/blob/main/src/prancheta.png)

## 📌 Requisitos
1. Definir a frequência de PWM da GPIO 22 para 50Hz (período de 20ms).
2. Ajustar o ciclo ativo para 2.400µs (aproximadamente 180°), 1.470µs (aproximadamente 90°) e 500µs (aproximadamente 0°), aguardando 5 segundos em cada posição.
3. Implementar movimentação periódica suave entre 0° e 180°, com passos de 5µs e atraso de 10ms.
4. Usar a ferramenta **BitDogLab** para realizar um experimento com o LED RGB (GPIO 12), observando o comportamento da iluminação.

![---](https://github.com/nailasuely/task07-pwm/blob/main/src/prancheta.png)

## 🔧 Componentes Utilizados

- **Raspberry Pi Pico W**
- **Servomotor Micro Servo** (simulação no Wokwi)
- **LED RGB** (GPIO 12)
- **GPIO 22** (PWM para controle do servomotor)

![---](https://github.com/nailasuely/task07-pwm/blob/main/src/prancheta.png)

## 📂 Estrutura do Projeto

- `task07-pwm`: Código principal para controle do servomotor e LED RGB.
  
![---](https://github.com/nailasuely/task05-clock/blob/main/src/prancheta.png)

## 🚀 Como Executar  

### ✅ Pré-requisitos  
- **VS Code** com ambiente do **Pico SDK** configurado  
- **CMake** instalado  
- **Simulador Wokwi** e **BitDogLab** integrados  
- **Placa Raspberry Pi Pico W** (caso execute em hardware real)  

### 📌 Passos para Execução  
1. Clone o repositório:  
   ```sh
   git clone https://github.com/nailasuely/task07-pwm.git
   cd task06-uart-i2c```
2. Compile e suba o código para o Pico W ou execute no simulador Wokwi.

![---](https://github.com/nailasuely/task05-clock/blob/main/src/prancheta.png)

## 🎥 Vídeo de Demonstração
[Link](https://youtu.be/WZbDXFe_Wms)

![---](https://github.com/nailasuely/task07-pwm/blob/main/src/prancheta.png)

## 👩‍💻 Autora

<table>
  <tr>
    <td align="center">
      <a href="https://github.com/nailasuely" target="_blank">
        <img src="https://avatars.githubusercontent.com/u/98486996?v=4" width="100px;" alt=""/>
      </a>
      <br /><sub><b> Naila Suele </b></sub>
    </td>

</table>

![---](https://github.com/nailasuely/task07-pwm/blob/main/src/prancheta.png)

## 📚 Referências
- [Projeto PWM IRQ - Professor Ricardo Prates](https://github.com/rmprates84/pwm_irq)
- [EmbarcaTech U4C6 - Repositório do Professor Wilton Lacerda Silva](https://github.com/wiltonlacerda/EmbarcaTechU4C6)
- [BitDogLab - Display OLED](https://github.com/BitDogLab/BitDogLab-C/tree/main/display_oled)

