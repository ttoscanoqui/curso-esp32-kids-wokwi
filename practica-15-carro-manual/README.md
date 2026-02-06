**Título 🚗💻: Controla tu Carro Robot con ESP32 y Joystick!**

**Objetivo de aprendizaje**: En esta práctica, aprenderás a integrar sistemas, controlar movimientos y velocidades en un carro robot utilizando el microcontrolador ESP32 y un joystick.

**Badge de simulación Wokwi 🎉**
Puedes probar este proyecto sin hardware en [Wokwi](https://wokwi.com/projects/new/esp32)

**Conceptos a aprender:**

* **Integración de sistemas**: ¿Sabías que un carro robot es como una pequeña ciudad? Tiene varios "edificios" (componentes) que trabajan juntos para hacer algo genial. En este caso, el ESP32 es el "alcalde" que controla todo.
* **Movimientos y velocidades**: Un carro robot se mueve gracias a los motores DC. ¡Es como cuando te subes en tu bicicleta y empiezas a pedalear! El joystick es la "palanca de cambio" que ayuda al ESP32 a decidir hacia dónde quiere ir el carro.

**Materiales:**

* ESP32
* 2 Motores DC ⚙️ [Amazon](https://www.amazon.com.mx/Motor-Directo-DC-Velocidad-Adaptador/dp/B071K1R2Y5/)
* Driver L298N 🔄 [Digi-Key](https://www.digikey.com/product-detail/en/l298n/497-1003-ND/1356117)
* Chasis ⚒️ [Adafruit](https://www.adafruit.com/product/3296)
* Ruedas 👀 [Amazon](https://www.amazon.com.mx/Rueda-Alta-Presión-Caro-Robot/dp/B076M8JFZG/)
* Batería 🔋 [Digi-Key](https://www.digikey.com/product-detail/en/24-ajh-f2-3.7v/24-AJH-F2-3.7V-ND/1766614)

**Diagrama de conexión:**

1. Conecta el ESP32 al chasis.
2. Conecta los motores DC a la salida A y B del Driver L298N.
3. Conecta el joystick a la entrada analógica del ESP32.
4. Conecta la batería a la salida del Driver L298N.

**Sección: "🖥️ Simular en Wokwi"**
Puedes probar este proyecto sin hardware utilizando [Wokwi](https://wokwi.com/projects/new/esp32). Simula el comportamiento del carro robot y ajusta los parámetros para ver cómo cambia la velocidad y dirección.

**Explicación del código paso a paso:**

1. **Incluir bibliotecas**: Necesitamos incluir las bibliotecas para el ESP32, el joystick y los motores DC.
2. **Configurar pines**: Configuramos los pines para que el ESP32 se comunique con los componentes.
3. **Definir variables**: Definimos variables para almacenar la velocidad y dirección del carro.
4. **Leer datos del joystick**: Leemos los datos del joystick y calculamos la velocidad y dirección.
5. **Controlar motores**: Controlamos los motores DC según la velocidad y dirección calculada.

**Retos adicionales:**

1. **Añadir sensores de distancia**: Añade sensores de distancia para que el carro se pueda evitar obstáculos.
2. **Implementar un sistema de navegación**: Implementa un sistema de navegación para que el carro pueda seguir una ruta predefinida.
3. **Crear un juego de carreras**: Crea un juego de carreras en el que dos carros robot puedan competir.

**¿Qué sigue?**
¡Excelente! Has completado la práctica 15. ¡Ahora es hora de conectarte a la próxima práctica: "Controla tu Carro Robot con Sensores y Algoritmos"! 🚀👽

Recuerda que puedes preguntar en el foro o buscar ayuda si necesitas algo. ¡Buena suerte!