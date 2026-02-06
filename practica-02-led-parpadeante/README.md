**🔌 LED Parpadeante - Luces intermitentes 🔌**
===============================

¡Bienvenidos a la segunda práctica del curso de ESP32! En esta oportunidad, vamos a crear un proyecto divertido y fácil de entender: un LED parpadeante con diferentes velocidades. ¡Estás listo para aprender sobre bucles, variables y tiempos!

**📚 Objetivo de aprendizaje**
-------------------------

* Entender los conceptos básicos de programación con ESP32
* Aprender a utilizar bucles para crear efectos de parpadeo
* Conocer cómo trabajar con variables y tiempos en el código

**🏆 Badge de simulación Wokwi**
-----------------------------

[![Simulación en Wokwi](https://wokwi.com/projects/new/esp32)](https://wokwi.com/projects/new/esp32)

Puedes probar este proyecto sin necesidad de hardware físico utilizando la herramienta Wokwi.

**📝 Conceptos que aprenderás**
---------------------------

* **Bucles**: Son un tipo de estructura de control que permite repetir una secuencia de instrucciones varias veces. En nuestro caso, utilizaremos bucles para crear el efecto de parpadeo.
* **Variables**: Son contenedores que almacenan valores en la memoria del microcontrolador. Utilizaremos variables para controlar la velocidad y el patrón de parpadeo del LED.
* **Tiempos**: Los tiempos se utilizan para medir la duración de una acción o evento en el código. En nuestro caso, utilizaremos tiempos para controlar la frecuencia de parpadeo del LED.

**🎯 Lista de materiales**
-------------------------

* ESP32
* LED
* Resistencia 220Ω
* Cables

[![LED](https://www.ebay.com/papitaille/led-5mm)](https://www.ebay.com/sch/i.html?_from=R40&_trksid=m570.l1313&_nkw=led+5mm&_sacat=0&tytg_id=LISTINGS)
[![Resistencia 220Ω](https://www.amazon.com.mx/gp/product/B076MX9F8T/)](https://www.amazon.com.mx/s?k=resistencia+220%CE%B4)
[![Cables](https://www.ebay.com/papitaille/cable-usb-micro-a-b-masculino)](https://www.ebay.com/sch/i.html?_from=R40&_trksid=m570.l1313&_nkw=cable+usb+micro+a+b+m&tytg_id=LISTINGS)

**📈 Diagrama de conexión**
-------------------------

Para conectar el LED al ESP32, sigue estos pasos:

1. Conecta la resistencia 220Ω entre el pin del LED y la pata GND del ESP32.
2. Conecta el otro extremo del cable USB a la pata USB del ESP32.

**🖥️ Simular en Wokwi**
-------------------------

Puedes probar este proyecto sin necesidad de hardware físico utilizando la herramienta Wokwi. Simula el circuito y ejecuta el código para ver cómo funciona el LED parpadeante.

**💻 Explicación del código**
-----------------------------

El código consta de tres partes principales:

1. **Inclusión de bibliotecas**: Incluimos las bibliotecas necesarias para trabajar con el ESP32.
2. **Definición de variables**: Definimos las variables que utilizaremos para controlar la velocidad y el patrón de parpadeo del LED.
3. **Bucle principal**: El bucle principal es donde se ejecutan las instrucciones para crear el efecto de parpadeo.

Aquí te muestro un ejemplo de código:
```c
#include <WiFi.h>

// Definición de variables
int ledPin = 2; // Pin del LED
int velocidad = 500; // Velocidad inicial

void setup() {
  pinMode(ledPin, OUTPUT); // Configura el pin como salida
}

void loop() {
  digitalWrite(ledPin, HIGH); // Enciende el LED
  delay(velocidad); // Espera la velocidad definida
  digitalWrite(ledPin, LOW); // Apaga el LED
  delay(velocidad); // Espera la velocidad definida
}
```
**👏 Retos adicionales**
-------------------------

1. **Crea un efecto de parpadeo más complejo**: Utiliza diferentes velocidades y patrones de parpadeo para crear un efecto más interesante.
2. **Agrega un botón para controlar el LED**: Utiliza un botón para permitir que el usuario controle la velocidad y el patrón de parpadeo del LED.
3. **Crea un sistema de iluminación**: Utiliza varios LEDs y circuitos para crear un sistema de iluminación más complejo.

**¿Qué sigue?**
----------------

En la siguiente práctica, aprenderás a trabajar con sensores y realizarás un proyecto que utilice el ESP32 como sensor de movimiento. ¡Estás listo para seguir adelante!