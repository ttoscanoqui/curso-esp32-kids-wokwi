**📚 Práctica 8: Sensor Ultrasónico - Mide Distancias 🤖**
=============================================

**Objetivo de aprendizaje:** 💡 Entender cómo utilizar un sensor ultrasónico para medir distancias y aprender sobre conceptos como tiempo de vuelo, pulseIn y cálculos.

**Badge de simulación Wokwi:**
✨ [Simular en Wokwi](https://wokwi.com/projects/new/esp32)

**Conceptos a aprender:** 🤔

* **Tiempo de vuelo**: ¿Qué sucede cuando emites un sonido y este regresa? El tiempo que tarda el sonido en regresar se llama tiempo de vuelo.
* **PulseIn**: ¿Cómo podemos medir el tiempo de vuelo? Utilizando la función pulseIn, que devuelve el tiempo que tardó en recibir el echo (sonido regresado).
* **Cálculos**: ¿Qué pasa si queremos saber la distancia real? Necesitamos hacer algunos cálculos sencillos para obtener la respuesta correcta.

**Materiales:**
📝

* ESP32
* Sensor HC-SR04
* Cables
* Fuente de alimentación (no incluido)

![Sensor Ultrasónico](https://www.waveshare.com/wiki/File:HC-SR04.jpg)
(Sensor Ultrasónico - Fuente: Waveshare)

**Diagrama de conexión:** 🔌

1. Conecta el sensor HC-SR04 a la ESP32:
	* VCC (5V) -> 5V ESP32
	* GND -> GND ESP32
	* TRIG -> GPIO13 ESP32
	* ECHO -> GPIO12 ESP32
2. Conecta la fuente de alimentación a la ESP32.

![Diagrama de conexión](https://raw.githubusercontent.com/.../esp32-ultras%C3%B3nico.png)
(Diagrama de conexión - Fuente: [GitHub](...)

**🖥️ Simular en Wokwi:** 🚀

Puedes probar la práctica sin hardware utilizando el simulador Wokwi. ¡Es una forma divertida y segura de experimentar!

**Explicación del código:** 💻

1. Carga el código en tu ESP32.
2. Configura las pines del sensor HC-SR04:
	* `TRIG` -> `GPIO13`
	* `ECHO` -> `GPIO12`
3. Llama a la función `pulseIn()` para medir el tiempo de vuelo:
	* `time = pulseIn(ECHO, HIGH);`
4. Calcula la distancia utilizando la fórmula:
	* `distance = (time * 340) / 2;`

**Reto adicionales:** 💡

1. **Medir distancias con precisión**: ¿Qué pasa si queremos medir distancias muy largas o cortas? Necesitamos ajustar la fórmula para obtener resultados precisos.
2. **Crear un sistema de detección de obstáculos**: ¿Cómo podemos utilizar el sensor ultrasónico para detectar obstáculos en nuestro entorno?
3. **Simular un radar**: ¿Qué pasaría si utilizaramos varios sensores ultrasónicos para crear un sistema de detección de objetos como los radares?

**¿Qué sigue?:** 🔜

La próxima práctica será sobre comunicación serial utilizando el protocolo UART. ¡Estás listo para aprender más! 💻