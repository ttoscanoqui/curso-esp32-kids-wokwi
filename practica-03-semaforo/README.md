**Semáforo Inteligente con ESP32 🚨💡**

¡Bienvenidos a la práctica 3 del curso de ESP32! En esta actividad, aprenderás a simular un semáforo real utilizando LEDs y el microcontrolador ESP32.

**Objetivo de aprendizaje**
Aprenderás a:

* Utilizar múltiples salidas para controlar varios dispositivos (LEDs)
* Crear secuencias de estados para simular el comportamiento del semáforo
* Entender la importancia de los estados en un sistema de control

**Badge de simulación Wokwi**
Puedes probar y ver cómo funciona el proyecto sin necesidad de hardware. ¡Simula ahora! [https://wokwi.com/projects/new/esp32](https://wokwi.com/projects/new/esp32)

**Conceptos que aprenderás**

* **Múltiples salidas**: Puedes conectar múltiples dispositivos a un microcontrolador para controlarlos de manera independiente.
* **Secuencias**: Son una secuencia de estados que se ejecutan en orden, como una fila de comandos.
* **Estados**: Son los diferentes estados en los que puede estar el sistema de control. Por ejemplo, un semáforo puede estar en estado rojo, amarillo o verde.

**Materiales**

* ESP32
* 3 LEDs (rojo, amarillo, verde)
* 3 Resistencias 220Ω
* Cables

![Imagen de los materiales](https://raw.githubusercontent.com/.../esp32-materials.png)

**Diagrama de conexión**
Para conectar los componentes, sigue estos pasos:

1. Conecta el LED rojo a la salida D2 del ESP32 mediante una resistencia de 220Ω.
2. Conecta el LED amarillo a la salida D4 del ESP32 mediante una resistencia de 220Ω.
3. Conecta el LED verde a la salida D5 del ESP32 mediante una resistencia de 220Ω.

**Sección: "Simular en Wokwi" 🖥️**
Puedes probar y ver cómo funciona el proyecto sin necesidad de hardware. ¡Simula ahora! [https://wokwi.com/projects/new/esp32](https://wokwi.com/projects/new/esp32)

**Explicación del código paso a paso**

El código consta de tres partes:

1. **Inicialización**: Se inicializan las salidas y se establecen los pines para cada LED.
```c
const int ledRojo = 2;
const int ledAmarillo = 4;
const int ledVerde = 5;

void setup() {
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}
```
2. **Función de secuencia**: Se define una función que simula la secuencia del semáforo.
```c
void secuencia() {
  digitalWrite(ledRojo, HIGH); // Apagar el LED rojo
  delay(1000); // Esperar un segundo
  digitalWrite(ledAmarillo, HIGH); // Encender el LED amarillo
  delay(500); // Esperar medio segundo
  digitalWrite(ledVerde, HIGH); // Encender el LED verde
  delay(2000); // Esperar dos segundos
}
```
3. **Bucle principal**: Se ejecuta la función de secuencia infinitamente.
```c
void loop() {
  secuencia();
}
```

**Retos adicionales**

1. **Añade un botón para cambiar el estado del semáforo**: Utiliza un botón para cambiar entre los diferentes estados del semáforo.
2. **Añade una función de temporizador**: Crea una función que simule el comportamiento del temporizador del semáforo.
3. **Añade un sensor de movimiento**: Utiliza un sensor de movimiento para hacer que el semáforo se active automáticamente.

**¿Qué sigue?**
En la próxima práctica, aprenderás a utilizar sensores y actuadores para controlar un sistema más complejo. ¡Estoy emocionado de ver cómo avanzas en este curso!