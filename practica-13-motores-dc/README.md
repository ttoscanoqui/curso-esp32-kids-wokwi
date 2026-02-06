**Control de Motores DC - Movimiento Básico 🚀**
==============================

**Objetivo de aprendizaje:**
-------------------------

En esta práctica, aprenderás a controlar la velocidad y dirección de motores DC utilizando un ESP32. Serás capaz de entender cómo funciona el control de motores y cómo utilizar componentes como el Driver L298N para lograr movimiento básico.

**Badge de simulación Wokwi**
-------------------------

¡Simula tu proyecto en línea sin necesidad de hardware! 🤖

[Accede a la práctica en Wokwi](https://wokwi.com/projects/new/esp32)

**Conceptos que aprenderás:**

* **Control de motores**: Aprenderás cómo controlar la velocidad y dirección de los motores DC utilizando señales digitales.
* **H-Bridge**: Comprenderás cómo funciona el Driver L298N, un H-Bridge que permite controlar la dirección y velocidad de los motores.
* **Dirección**: Aprenderás a cambiar la dirección del motor simplemente cambiando una señal en tu código.

**Materiales:**

* ESP32 📚
* Motor DC ⚙️
* Driver L298N 🔌
* Batería 💡
* Cables 👉

[Tutoriales de conexión para cada componente](https://www.youtube.com/results?search_query=esp32+motor+dc+driver+l298n)

**Diagrama de conexión:**

1. Conecta el motor DC a las salidas del Driver L298N.
2. Conecta la batería a la entrada del Driver L298N.
3. Conecta los cables entre el ESP32 y el Driver L298N.

![Conexión de hardware](https://example.com/hardware-connection.png)

**Simulación en Wokwi 🖥️:**

Si no tienes acceso a un ESP32, puedes simular tu proyecto en línea utilizando Wokwi. ¡Es una forma divertida y sin riesgos de experimentar con código!

[Accede a la práctica en Wokwi](https://wokwi.com/projects/new/esp32)

**Explicación del código:**

El código utiliza la biblioteca `Wire` para comunicarse con el Driver L298N. Se envían señales digitales al Driver para controlar la velocidad y dirección del motor.

```c
#include <Wire.h>

// Configuración del Driver L298N
const int enablePin = 2; // Pin de activación del Driver
const int dir1Pin = 3;   // Pin de dirección 1
const int dir2Pin = 4;   // Pin de dirección 2

void setup() {
  pinMode(enablePin, OUTPUT);
  pinMode(dir1Pin, OUTPUT);
  pinMode(dir2Pin, OUTPUT);

  // Inicializa el Driver L298N
  digitalWrite(enablePin, HIGH); // Activar el Driver
}

void loop() {
  // Controla la velocidad del motor
  analogWrite(5, 255); // Maxima velocidad

  // Cambia la dirección del motor
  digitalWrite(dir1Pin, HIGH);
  delay(1000);

  digitalWrite(dir2Pin, HIGH);
  delay(1000);

  // Apaga el motor
  digitalWrite(enablePin, LOW);
}
```

**Retos adicionales:**

* **Modifica el código para que el motor gire en sentido contrario**: Cambia la señal de `dir1Pin` y `dir2Pin` para cambiar la dirección del motor.
* **Añade un sensor de distancia para evitar colisiones**: Utiliza un sensor de ultrasonido o infrarrojo para detectar obstáculos y controlar el movimiento del motor en consecuencia.
* **Crea un sistema de seguimiento de línea utilizando un motor DC y un sensor de luz**: Utiliza un sensor de luz para seguir una línea y controlar el movimiento del motor en consecuencia.

**¿Qué sigue?**

¡Felicidades por completar la práctica! 🎉 En la siguiente práctica, aprenderás a controlar motores paso a paso utilizando un ESP32. ¡Está listo para empezar!