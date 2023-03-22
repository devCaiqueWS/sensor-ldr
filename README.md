# Sistema de detecção de luminosidade com Arduino


Este projeto utiliza um sensor de luz (LDR), LEDs e um buzzer para criar um sistema que detecta a luminosidade da vinheiria ou adega e acende um dos LEDs de acordo com o nível de luminosidade, indicando quão prejudicial pode ser o estado atual de iluminação.


## Objetivo

Vocês foram contratados pela Vinheria Agnello para desenvolver um sistema de monitoramento a ser instalado no ambiente em que os vinhos são armazenados. O dono a Vinheria informou que a qualidade do vinho é influenciada diretamente pelas condições de temperatura, umidade e luminosidade do ambiente. Neste primeiro momento, você propôs ao dono da Vinheria um projeto em etapas, de modo que seu 1° desafio é:

Elaborar um sistema usando Arduino que faça a captura das informações de luminosidade do ambiente.  Para isso pesquise sobre o LDR. Verifique como eles funcionam e como poderiam ser usados no projeto.

De posse dos dados coletados, implemente um sistema de alarme, utilizando LEDs, para sinalizar quando o a ambiente estiver OK, ou quando alguma grandeza estiver fora dos limites estipulados.  Use um LED verde para indicar que está OK, um LED amarelo para indica que está em níveis de alerta e um LED Vermelho para indicar que tem algum problema.

Quando a luminosidade estiver em nível de alerta, deve soar uma buzina (buzzer) por 3 segundos. A buzina volta a soar caso a luminosidade permaneça em nível de alerta.

## Descrição do desafio

### Desenvolvimento do projeto
   
   O projeto foi desenvolvido no editor de código do Arduino e na plataforma digital <a href"https://www.tinkercad.com">Tinkercad</a>, utilizando a linguagem de programação C++ e a plataforma para prototipagem. O código começa com a declaração das variáveis 'luminosidade' e 'i', seguido pela função 'setup()', que configura os pinos dos LEDs e do Buzzer como saídas, o pino A0 como entrada para o sensor de luz e a comunicação serial. No loop principal, a variável luminosidade é atualizada com o valor da leitura analógica do sensor de luz e os LEDs e Buzzer são acionados de acordo com a luminosidade medida.

### Como executar o projeto

1. Conecte o LDR ao pino A0 do Arduino em serie com um resistor de 10kΩ (em pull-down);  
2. Os LEDs e o Buzzer aos pinos indicados no código e aos resistores de 220 ohms em série com cada LED;
3. Faça o upload do código para o Arduino;
4. Alimente o Arduino com uma fonte externa ou através do cabo USB;
5. Observe a luminosidade do ambiente e como os LEDs e o Buzzer respondem a ela;
   
### Pré-requisitos
   
  ### Materiais

- 1 Arduino UNO;
- 1 Sensor de luz (LDR);
- 3 LEDs (verde, amarelo e vermelho);
- 1 Buzzer;
- 3 resistores de 220 Ω;
- 1 resistor de 10 kΩ;
- Jumpers;



## Esquema elétrico

O esquema elétrico do projeto é o seguinte:

![Circuito Esquemático](https://github.com/devCaiqueWS/sensor-luminosidade/blob/main/circuito.jpeg)

## Funcionamento

O projeto consiste em ler a luminosidade do ambiente (Vinheiria) através do sensor LDR e com base no valor lido, acender um dos LEDs (verde, amarelo ou vermelho). O LED verde é aceso se a luminosidade for baixa, o amarelo é aceso caso a luminosidade não seja a ideal mas não prejudique o produção dos vinhos e o vermelho é aceso  e o Buzzer acionado por 3 segundos se a luminosidade for alta demais para a conservação no produto no ambiente analisado.

## Código

O código para o projeto está disponível no arquivo <a href="https://github.com/devCaiqueWS/sensor-luminosidade/blob/main/main.ino">main.ino</a>. Ele utiliza as funções:

- Serial.begin (Configura a taxa de transmissão de dados em bits);
- AnalogRead (Utilizada para ler o valor da tensão produzida pelo sensor de luz LDR);
- DigitalWrite (É utilizada para controlar os LEDs e o buzzer, que são saídas digitais. usando HIGH para ligar e LOW para desligar );
- Delay (Define o tempo que o sistema tera que esperar para realizar outra ação);

## Video explicativo

Link para o video explicativo: <a href"#">?</a>

## Conclusão

Este projeto demonstra como é possível utilizar o Arduino para criar um sistema de detecção de luminosidade simples e eficiente para o controle em adegas de vinho e vinheirias. 
Em resumo, este projeto demonstra como é possível utilizar o Arduino para controlar a luminosidade e criar sistemas simples de automação comercial. Com base neste código, é possível explorar outras possibilidades de controle de iluminação e criar projetos mais avançados e personalizados.
