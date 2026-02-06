**🚗 Práctica 16: Carro Bluetooth - Control desde App Móvil**
==============================================

### Objetivo de aprendizaje
Aprender a controlar un carro con motores DC y driver L298N utilizando Bluetooth Low Energy (BLE) y una app móvil. Integrar los conceptos aprendidos hasta ahora para crear un proyecto completo.

**Badge de simulación Wokwi**
---------------------------

[![Simulador en Wokwi](https://img.shields.io/badge/Wokwi-👍-blue)](https://wokwi.com/projects/new/esp32)

### Conceptos que aprenderás
* **Bluetooth Low Energy (BLE):** Una tecnología de comunicación inalámbrica que permite a dispositivos conectarse entre sí sin necesidad de una red Wi-Fi o cableada.
* **App móvil:** Un programa desarrollado para ser ejecutado en un dispositivo móvil, como un teléfono o tableta. En este caso, utilizarás la app para controlar el carro.
* **Comandos:** Se refiere a las señales que envían los dispositivos conectados por Bluetooth para indicar qué acción realizar.

### Materiales necesarios
¡Verifica que tengas todo listo!

* [ESP32](https://www.sparkfun.com/products/13284)
* 2 Motores DC (como estos: [DC Motor - 6V, 1.5A](https://www.amazon.es/DC-Motor-6V-1-5A/dp/B07B9F7X9G))
* Driver L298N ([como este](https://www.amazon.es/L298N-Driver-PWM-H-Bridge/dp/B01K8WYRJU))
* Chasis completo (como estos: [Chasis para carreras con ESP32](https://www.adafruit.com/product/4091))
* Batería 6V (como esta: [Bateria de plomo ácido 6V, 4Ah](https://www.amazon.es/Bateria-Plomo-Aciado-6V-4AH/dp/B01MSQ2M3A))

### Diagrama de conexión
¡Conecta los componentes como se indica a continuación!

1. Conecta el ESP32 al chasis del carro.
2. Conecta los motores DC al driver L298N.
3. Conecta el driver L298N al ESP32.
4. Conecta la batería 6V al chasis.

### 🖥️ Simular en Wokwi
Si no tienes todos los componentes, ¡no te preocupes! Puedes simular este proyecto en [Wokwi](https://wokwi.com/). Es una herramienta gratuita que permite simular circuitos electrónicos y proyectos de programación.

### Código
¡A continuación, encontrarás el código para controlar el carro con Bluetooth Low Energy!

```cpp
// Importa las bibliotecas necesarias
#include <BLEDevice.h>
#include <BLEServer.h>

// Definir los pines del ESP32
const int enA = 12; // Pin que conectará al driver L298N (enA)
const int in1 = 14; // Pin que conectará al motor 1
const int in2 = 13; // Pin que conectará al motor 2

// Definir el servicio y la característica BLE
BLEServer* server;
BLECharacteristic* characteristic;

void setup() {
  Serial.begin(9600);

  // Inicializar los pines como salidas
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

  // Inicializar el servidor BLE
  server = new BLEServer();
  characteristic = new BLECharacteristic("carro");

  // Establecer la velocidad de comunicación BLE
  characteristic->setProperties(BLEProperty::WRITE);
  characteristic->setValue(0);
}

void loop() {
  // Leer los comandos enviados por la app móvil
  if (characteristic->canRead()) {
    int comando = characteristic->readInt8();

    // Interpretar el comando y mover el carro
    switch (comando) {
      case 1: // Avanzar
        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
        break;
      case 2: // Retroceder
        digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
        break;
      case 3: // Detener
        digitalWrite(in1, LOW);
        digitalWrite(in2, LOW);
        break;
    }
  }

  delay(10); // Retardo para evitar sobrecargar el procesador
}

```

### Retos adicionales

1. **Agregar sensor de distancia:** Instala un sensor de ultrasonido o inductivo para que el carro se detenga automáticamente si encuentra obstáculos.
2. **Implementar autonomía:** Utiliza una batería recargable y aumenta la eficiencia energética del proyecto para que el carro funcione durante más tiempo.
3. **Crear un juego:** Desarrolla un juego de carreras donde los jugadores puedan controlar sus propios carros con Bluetooth Low Energy.

### ¿Qué sigue?
¡Bien hecho! Ya has completado la práctica 16. ¡Ahora, prepárate para la siguiente aventura!

La próxima práctica es sobre **Redes Wi-Fi y IoT**. Aprenderás a conectar dispositivos a internet y a crear proyectos de Internet de las cosas (IoT).