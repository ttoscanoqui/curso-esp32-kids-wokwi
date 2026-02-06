**🎉 Práctica 14: Joystick - Control Analógico 🤖**

**Objetivo de aprendizaje:** Aprender a leer posiciones del joystick para controlar motores y comprender conceptos básicos de lectura analógica y mapeo de valores.

**Badge de simulación Wokwi:**
[![Simular en Wokwi](https://wokwi.com/assets/img/wokwi-badge.png)](https://wokwi.com/projects/new/esp32)

**Conceptos que aprenderás:**

* **analogRead**: Leer valores del joystick y convertirlos a números.
* **Mapeo de valores**: Asignar rangos de valores a acciones específicas (por ejemplo, mover el motor hacia arriba o abajo).
* **Ejes X-Y**: Comprender cómo los joysticks tienen dos ejes que permiten controlar dos direcciones diferentes.

**Lista de materiales:**

📚 ESP32
🎮 Joystick analógico (similar a este: https://www.amazon.com/Analogo-PS2-Joystick-Controlador-PC/dp/B07D9P7CQH)
💻 Cables para conectar el joystick al ESP32

**Diagrama de conexión:**

1. Conecta el joystick a un puerto analogo del ESP32 (A0, A1 o A2).
2. Conecta la tierra del joystick a una pata GND del ESP32.
3. Conecta la alimentación del joystick a una fuente de 5V del ESP32.

**🖥️ Simular en Wokwi:**
Puedes probar el código sin necesidad de hardware, simplemente crea un proyecto nuevo en Wokwi y copia el código aquí debajo.

**Explicación del código paso a paso:**

1. Inicializa los pines analogos para leer la posición del joystick.
2. Lee la posición del joystick usando `analogRead`.
3. Mapea los valores leídos a acciones específicas (por ejemplo, mover el motor hacia arriba o abajo).
4. Envía las señales de control al motor.

**Código:**
```cpp
const int joyX = A0;  // Pin del joystick X
const int joyY = A1;  // Pin del joystick Y

void setup() {
  Serial.begin(115200);
  pinMode(joyX, INPUT); // Inicializa el pin como entrada
  pinMode(joyY, INPUT); // Inicializa el pin como entrada
}

void loop() {
  int joyValueX = analogRead(joyX); // Lee la posición del joystick X
  int joyValueY = analogRead(joyY); // Lee la posición del joystick Y

  // Mapea los valores leídos a acciones específicas (por ejemplo, mover el motor hacia arriba o abajo)
  if (joyValueX > 500) {
    Serial.println("Mover motor hacia adelante");
  } else if (joyValueX < 200) {
    Serial.println("Mover motor hacia atrás");
  }

  // Envía las señales de control al motor
  digitalWrite(MOTOR_PIN, HIGH); // Mover el motor hacia arriba

  delay(50);
}
```

**Retas adicionales:**

1. **Agregar un botón para resetear la posición del joystick**: Puedes agregar un botón que permita restablecer la posición del joystick a cero.
2. **Implementar control de velocidad**: Puedes implementar un control de velocidad que permita ajustar la velocidad del motor según la posición del joystick.
3. **Agregar otro eje para controlar otra dirección**: Puedes agregar otro eje para controlar otra dirección, como el movimiento en X o Y.

**¿Qué sigue?**

La siguiente práctica te llevará a crear un sistema de control remoto utilizando el ESP32 y un módulo Wi-Fi. ¡Estás listo para dar el próximo paso!