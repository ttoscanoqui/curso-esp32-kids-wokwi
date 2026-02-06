**🔌 Práctica 4: Botón Interactivo - Control Manual 🔌**

**Objetivo de aprendizaje:** Aprender a leer entradas digitales y controlar un dispositivo (LED) con un botón.

**Badge de simulación Wokwi:** 🎉 [Simula en Wokwi](https://wokwi.com/projects/new/esp32)

**Conceptos que aprenderás:**

* **digitalRead**: Leer el estado de una entrada digital (0 o 1).
* **Entradas digitales**: Son los pines del ESP32 que pueden recibir señal digital (0 o 1).
* **Pull-up/Pull-down**: Reglas para configurar la tensión en las entradas digitales.

**Materiales:**

| Componente | Imagen de referencia |
| --- | --- |
| ESP32 | [![ESP32](https://raw.githubusercontent.com/espressif/esp-idf/master/examples/protocols/http/assets/esp32.png)](https://www.espressif.com/en/products/socs/esp32) |
| LED | [![LED](https://upload.wikimedia.org/wikipedia/commons/thumb/e/ec/Light Emitting Diode.svg/200px-Light Emitting Diode.svg.png)](https://es.wikipedia.org/wiki/Di%C3%B1o_emisor_de_luz) |
| Pulsador | [![Pulsador](https://raw.githubusercontent.com/johnny-five-io/Johnny-Five/master/docs/images/buttons/switch-button.jpg)](https://www.sparkfun.com/products/12646) |
| Resistencias | [![Resistencia](https://upload.wikimedia.org/wikipedia/commons/thumb/d/d3/Resistor.svg/200px-Resistor.svg.png)](https://es.wikipedia.org/wiki/Resistencia_(f%C3%ADsica)) |
| Cables | [![Cable](https://raw.githubusercontent.com/johnny-five-io/Johnny-Five/master/docs/images/wiring.jpg)](https://www.sparkfun.com/products/12645) |

**Diagrama de conexión:**

1. Conecta el LED a un pin digital del ESP32 (por ejemplo, GPIO2).
2. Conecta la resistencia en serie con el LED.
3. Conecta el pulsador a una entrada digital del ESP32 (por ejemplo, GPIO0).
4. Conecta la otra punta del pulsador a GND.

**🖥️ Simular en Wokwi:**

Si no tienes hardware, ¡no te preocupes! Puedes probar esta práctica en el simulador de Wokwi. Simula la conexión y ejecuta el código para ver cómo funciona.

**Explicación del código:**

1. Incluye la biblioteca `WiFi` y `esp_now`.
2. Configura los pines como entradas digitales.
3. Lee el estado del botón con `digitalRead()` y asigna a una variable (por ejemplo, `botonPresionado`).
4. Si el botón está presionado, enciende el LED con `digitalWrite()`.
5. Lleva un temporizador para no tener que pulsar constantemente el botón.

```c
#include <WiFi.h>
#include <esp_now.h>

const int boton = GPIO0; // Pulsador conectado a GPIO0
const int led = GPIO2;   // LED conectado a GPIO2

void setup() {
  Serial.begin(115200);
  
  // Configura los pines como entradas digitales
  pinMode(boton, INPUT);
  pinMode(led, OUTPUT);
  
  // Configura la tensión en las entradas digitales (Pull-up)
  digitalWrite(boton, HIGH); // Pull-up
}

void loop() {
  int botonPresionado = digitalRead(boton);

  if (botonPresionado) {
    digitalWrite(led, HIGH); // Enciende el LED
  } else {
    digitalWrite(led, LOW);  // Apaga el LED
  }

  delay(100);
}
```

**Retos adicionales:**

1. **Añade un temporizador**: Hace que el botón se debilite después de 3 segundos de presionado.
2. **Añade más LEDs**: Conecta varios LEDs a diferentes pines y hace que enciendan sucesivamente cuando se presiona el botón.
3. **Añade un display**: Muestra en un display LCD qué LED está encendido.

**¿Qué sigue?**

¡Estoy emocionado de ver tu proyecto finalizado! En la siguiente práctica, aprenderás sobre comunicación por radio entre ESP32 utilizando protocolos como Zigbee y Bluetooth Low Energy (BLE).