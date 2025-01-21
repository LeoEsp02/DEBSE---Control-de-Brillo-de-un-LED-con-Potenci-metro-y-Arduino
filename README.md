# DEBSE---Control-de-Brillo-de-un-LED-con-Potenci-metro-y-Arduino
Actividad de la materia de Diseño Electronico Basado en Sistemas Embebidos

Descripción del Proyecto

Este proyecto demuestra cómo controlar la intensidad de un LED mediante un potenciómetro utilizando un Arduino. La posición del potenciómetro se traduce en diferentes niveles de brillo del LED, gracias a la modulación por ancho de pulso (PWM), es un sistema embebido básico con aplicaciones prácticas en electrónica y control de iluminación.
Componentes Utilizados y sus Funciones
1. Arduino UNO

El cerebro del proyecto, es un microcontrolador que recibe la señal analógica del potenciómetro, la procesa y genera una señal PWM para controlar el LED, su versatilidad lo hace ideal para proyectos de este tipo.
2. LED (Diodo Emisor de Luz)

El dispositivo de salida. el LED emite luz cuyo brillo se ajusta según la señal PWM enviada desde el Arduino.
3. Resistencia de 220 ohm

Protege al LED limitando la corriente que pasa a través de él. Sin esta resistencia, el LED podría dañarse debido a una sobrecarga de corriente.
4. Potenciómetro (10k ohm recomendado)

Es un resistor variable que actúa como divisor de voltaje, al girar su perilla, cambia la tensión enviada al pin analógico del Arduino, permitiendo controlar el brillo del LED.
5. Protoboard y Cables de Conexión

La protoboard permite montar el circuito sin necesidad de soldadura, los cables conectan los componentes al Arduino y entre sí.

Conexión
1. Potenciómetro:

    Terminal 1: Conéctalo al pin de 5V del Arduino (alimentación).
    Terminal 2 (central): Conéctalo al pin A0 del Arduino (entrada analógica).
    Terminal 3: Conéctalo al pin GND del Arduino (tierra).

2. LED:

    Ánodo (+): Conéctalo al pin 9 del Arduino a través de una resistencia de 220 ohm.
    Cátodo (-): Conéctalo directamente al pin GND del Arduino.

Código del Proyecto

El código realiza las siguientes tareas:

    Leer la posición del potenciómetro: Usa analogRead para capturar un valor entre 0 y 1023 que indica la posición de la perilla.
    Escalar el valor leído al rango PWM: Convierte el rango de entrada (0-1023) al rango aceptado por analogWrite (0-255).
    Ajustar el brillo del LED: Envía la señal PWM al pin del LED para controlar su intensidad.

    Explicación de los Conceptos Clave
1. Lectura Analógica (analogRead)

El Arduino mide el voltaje en el pin A0, generado por el potenciómetro, y lo convierte en un valor entre 0 y 1023, esto representa el rango de voltaje de 0V a 5V.
2. Modulación por Ancho de Pulso (PWM)

La PWM ajusta la intensidad del LED variando la proporción de tiempo que la señal está encendida (ciclo de trabajo), un ciclo más largo aumenta el brillo; uno más corto lo reduce.
3. Escalado de Valores (map)

La función map convierte el valor del potenciómetro (0-1023) al rango de la señal PWM (0-255), haciendo compatible la entrada analógica con la salida del LED.


