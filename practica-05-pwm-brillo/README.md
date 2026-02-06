**Título:** 🚀 Control de Brillo con PWM: ¡Ajusta el brillo de tu LED con ESP32! 🔌💡
=====================================================

**Objetivo de aprendizaje:** Aprender a controlar el brillo de un LED utilizando señales PWM (Pulse Width Modulation) con el microcontrolador ESP32.

**Badge de simulación Wokwi:**
[![Wokwi Badge](https://img.shields.io/badge/Wokwi-ESP32-orange)](https://wokwi.com/projects/new/esp32)

**Conceptos que aprenderás:** 💡

* **PWM (Pulse Width Modulation)**: Una técnica para controlar la intensidad de una señal eléctrica.
* **analogWrite**: Una función del microcontrolador ESP32 para generar una señal PWM.
* **Duty cycle**: La proporción de tiempo en que un ciclo PWM está activo.

**Materiales necesarios:**
📦

* Un ESP32 (por ejemplo, NodeMCU o ESP32 DevKitC)
* Un LED
* Una resistencia de 220Ω
* Cables para conectar los componentes

![Imagen de referencia del LED y la resistencia](https://example.com/led-resistencia.png)

**Diagrama de conexión:**
🔌

1. Conecta el LED a un pin digital del ESP32 (por ejemplo, GPIO2).
2. Conecta la resistencia de 220Ω entre el LED y el pin VCC del ESP32.
3. Conecta el pin GND del ESP32 con el pin GND del circuito.

![Imagen del diagrama de conexión](https://example.com/diagrama-conexion.png)

**🖥️ Simular en Wokwi:**
¡Puedes probar sin hardware! 🎉

Utiliza la plataforma Wokwi para simular y ejecutar el código sin necesidad de un ESP32 físico. Puedes encontrar el proyecto de simulación en [este enlace](https://wokwi.com/projects/new/esp32).

**Código:**
💻

```c
#include <Arduino.h>

const int ledPin = 2; // Pin digital para el LED
int brillo = 0; // Variable para almacenar el valor del brillo

void setup() {
  pinMode(ledPin, OUTPUT); // Configura el pin como salida
}

void loop() {
  analogWrite(ledPin, brillo); // Establece la señal PWM con el valor de brillo
  delay(50); // Espera durante 50 ms para controlar la frecuencia del LED

  if (brillo < 255) { // Incrementa el brillo cada iteración
    brillo++;
  } else {
    brillo = 0; // Resetea el brillo cuando alcanza el máximo
  }
}
```

**Retos adicionales:**

1. **Ajusta la frecuencia del LED**: Experimenta con diferentes valores de delay para ajustar la frecuencia del LED.
2. **Controla múltiples LEDs**: Añade más LEDs y ajusta su brillo individualmente utilizando la misma técnica PWM.
3. **Integra un sensor de luz**: Utiliza un sensor de luz (por ejemplo, LDR) para controlar el brillo del LED en función de la iluminación ambiente.

**¿Qué sigue?**
¡No te detengas aquí! 🎉

La próxima práctica será sobre **Control de Motor DC con ESP32**. Aprenderás a controlar el movimiento de un motor DC utilizando señales PWM y experimentarás con diferentes aplicaciones como la automatización de objetos móviles.

¡Buena suerte y diviértete aprendiendo! 😊