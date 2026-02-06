**📢 🎧 Comunicación Bluetooth - Chat Inalámbrico**
=============================================

¡Bienvenidos a la práctica 12 del curso de ESP32! En esta lección, aprenderás a enviar y recibir datos por Bluetooth utilizando tu ESP32. ¡Prepárate para crear un chat inalámbrico con tus amigos!

**Objetivo de aprendizaje**
-------------------------

* Comprender los conceptos básicos de Bluetooth y cómo funciona la comunicación serial.
* Aprender a utilizar la biblioteca `BluetoothSerial` en tu proyecto ESP32.
* Desarrollar habilidades para emparejar dispositivos y enviar/recibir datos.

**Badge de simulación Wokwi**
---------------------------

¡Simula el proceso con Wokwi sin necesidad de hardware!

[![Wokwi Badge](https://img.shields.io/badge/Wokwi-Simulador-FF69B4.svg?style=flat-square)](https://wokwi.com/projects/new/esp32)

**Conceptos que aprenderás**
---------------------------

* **Bluetooth**: Es una tecnología que permite la comunicación entre dispositivos sin cables. Piensa en ella como un "cable invisible" que conecta tus dispositivos.
* **Serial**: Se refiere a la forma en que los dispositivos se comunican entre sí, enviando datos uno detrás de otro. Imagina una línea de producción donde cada producto va pasando por una etapa antes de llegar al final.
* **Emparejamiento**: Es el proceso de conectar dos dispositivos Bluetooth para que puedan comunicarse entre sí.

**Materiales necesarios**
-------------------------

| Componente | Descripción |
| --- | --- |
| ESP32 | La placa central de tu proyecto. ¡La herramienta principal para crear y experimentar! 🎸 |
| [Conector USB](https://es.aliexpress.com/w/wholesale/conector-usb.html) | Para conectar tu ESP32 a tu computadora. Es como un cable que te conecta al mundo digital 😊 |
| [Cable de conexión](https://es.aliexpress.com/w/wholesale/cable-de-conexion.html) | Para conectar tus dispositivos Bluetooth entre sí. Un "cable invisible" para conectar tus amigos 😄 |

**Diagrama de conexión**
-------------------------

1. Conecta tu ESP32 a la computadora mediante el conector USB.
2. Conecta los cables de conexión entre las dos platinas ESP32 que vas a emparejar.

![Diagrama de conexión](https://example.com/diagrama-de-conexion.png)

**🖥️ Simular en Wokwi**
-------------------------

Si no tienes acceso a hardware, ¡simula el proceso con Wokwi! Es como crear un mundo digital para probar y experimentar sin necesidad de hardware físico.

1. Crea un nuevo proyecto en Wokwi.
2. Agrega la placa ESP32 al diagrama.
3. Conecta los cables de conexión entre las dos platinas.
4. Configura el emparejamiento y la comunicación serial.
5. ¡Disfruta de tu chat inalámbrico!

**Código: Paso a paso**
-------------------------

1. Incluye la biblioteca `BluetoothSerial` en tu proyecto ESP32.
2. Establece la velocidad de comunicación serial (9600 baudios).
3. Configura el emparejamiento y la comunicación serial.
4. Envía/recibe datos entre los dos dispositivos.

```c
#include <BluetoothSerial.h>

#define BAUD_RATE 9600

void setup() {
    Serial.begin(BAUD_RATE);
}

void loop() {
    // Envía un mensaje al otro dispositivo
    String mensaje = "Hola, amigo!";
    Serial.println(mensaje);

    // Recibe el mensaje del otro dispositivo
    if (Serial.available()) {
        String respuesta = Serial.readStringUntil('\n');
        Serial.println(respuesta);
    }
}
```

**Retos adicionales**
---------------------

1. **Agrega una interfaz de usuario**: Crea un botón o LED que permita a los usuarios interactuar con el chat.
2. **Implementa la autenticación**: Agrega un sistema de autenticación para asegurar que solo los dispositivos emparejados puedan acceder al chat.
3. **Agrega soporte para múltiples dispositivos**: Permite que varios dispositivos se conecten y participen en el chat.

**¿Qué sigue?**
----------------

¡Felicitaciones por completar la práctica 12! Ahora, ¡preparémonos para la siguiente lección: "Conexión Wi-Fi"!

¡Recuerda conectar tus dispositivos ESP32 a la red Wi-Fi y explorar las posibilidades de la conectividad inalámbrica!

¡Vamos a seguir adelante!