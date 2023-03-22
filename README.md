# Sistema de detecção de luminosidade com Arduino

Este projeto utiliza um sensor de luz (LDR), LEDs e um buzzer para criar um sistema que detecta a luminosidade da vinheiria ou adega e acende um dos LEDs de acordo com o nível de luminosidade. Quando a luminosidade atinge um valor alto o suficiente, o buzzer é acionado por 3 segundos.

## Materiais

- Arduino UNO;
- Sensor de luz (LDR);
- 3 LEDs (verde, amarelo e vermelho);
- Buzzer;
- 4 resistores de 220 ohms;
- Jumpers;



## Esquema elétrico

O esquema elétrico do projeto é o seguinte:

![Circuito Esquemático](https://github.com/devCaiqueWS/sensor-luminosidade/blob/main/circuito.jpeg)

## Funcionamento

O projeto consiste em ler a luminosidade do ambiente (Vinheiria) através do sensor LDR e com base no valor lido, acender um dos LEDs (verde, amarelo ou vermelho). O LED verde é aceso se a luminosidade for baixa, o amarelo é aceso se a luminosidade for média e o vermelho é aceso se a luminosidade for alta. Se a luminosidade for alta o suficiente, o buzzer é acionado por 3 segundos.

## Código

O código para o projeto está disponível no arquivo <a href="https://github.com/devCaiqueWS/sensor-luminosidade/main.ino">main.ino</a>. Ele utiliza as funções:

- Serial.begin (Configura a taxa de transmissão de dados em bits);
- AnalogRead (Utilizada para ler o valor da tensão produzida pelo sensor de luz LDR);
- DigitalWrite (É utilizada para controlar os LEDs e o buzzer, que são saídas digitais. usando HIGH para ligar e LOW para desligar );
- Delay (Define o tempo que o sistema tera que esperar para realizar outra ação);

## Como utilizar

1. Conecte o LDR ao pino A0 do Arduino;  
2. Os LEDs e o buzzer aos pinos indicados no código e aos resistores de 220 ohms em série com cada LED;
3. Faça o upload do código para o Arduino;
4. Alimente o Arduino com uma fonte externa ou através do cabo USB;
5. Observe a luminosidade do ambiente e como os LEDs e o buzzer respondem a ela;~

## Conclusão

Este projeto demonstra como é possível utilizar o Arduino para criar um sistema de detecção de luminosidade simples e eficiente para o controle em adegas de vinho e vinheirias. 
