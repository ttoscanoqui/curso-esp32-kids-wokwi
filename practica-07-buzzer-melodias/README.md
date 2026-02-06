**🎵 Buzzer Musical - Crea Melodías 🎶**

¡Bienvenidos a la Práctica 7! En esta actividad, aprenderás a programar tu ESP32 para tocar canciones con un buzzer pasivo. ¡Es hora de convertirte en un compositor de melodías electrónicas!

**📚 Objetivo de aprendizaje**

* Comprender el concepto de frecuencias y cómo se relacionan con las notas musicales.
* Aprender a utilizar la función `tone()` para reproducir sonidos en el ESP32.
* Trabajar con arrays de notas para crear melodías complejas.

**👍 Badge de simulación Wokwi**

Puedes probar este proyecto sin hardware utilizando la herramienta de simulación Wokwi: [https://wokwi.com/projects/new/esp32](https://wokwi.com/projects/new/esp32)

**🤔 Conceptos que aprenderás**

* **Frecuencias**: Las frecuencias son las cantidades que miden cuántas vibraciones por segundo se producen en un sonido. Piensa en una cuerda de guitarra: cuando la pulsas, la cuerda vibra a una frecuencia específica.
* **Arrays de notas**: Un array es como una lista de valores que puedes acceder y modificar en tu código. En este proyecto, crearás un array con las notas musicales que deseas reproducir.

**📚 Lista de materiales**

* ESP32
* Buzzer pasivo
* Cables

Imágenes de referencia:
* [Buzzer pasivo](https://www.amazon.es/Buzzer-Pasivo-10Khz-10mm/dp/B07BP9G7JF)
* [Cable](https://www.amazon.es/Cable-Connectores-ESP32-Wifi-Bluetooth/dp/B07BRWY2RR)

**🖥️ Diagrama de conexión**

1. Conecta el buzzer pasivo a un pin digital del ESP32 (por ejemplo, GPIO 13).
2. Conecta la alimentación del buzzer al mismo pin.
3. Conecta los cables en el puerto USB del ESP32.

![Diagrama de conexión](https://github.com/your-username/buzzer-musical/blob/master/schematics/connection.png)

**📝 Explicación del código paso a paso**

1. Inicializa la función `tone()` con el pin y la frecuencia deseada.
2. Crea un array de notas musicales con las frecuencias correspondientes.
3. Utiliza un bucle para reproducir cada nota en el array.
4. Ajusta los tiempos entre notas para crear una melodía agradable.

**🎉 Retos adicionales**

* **Melodía compleja**: Crea una melodía con al menos 5 notas diferentes y ajusta los tiempos entre ellas.
* **Sonido de fondo**: Agrega un sonido de fondo constante, como un "tick" o un "toque".
* **Interacción**: Crea un proyecto que permita a los usuarios interactuar con la melodía, por ejemplo, mediante botones o sensores.

**¿Qué sigue?**

¡Estás listo para conectarte a Internet y enviar datos desde tu ESP32! En la Práctica 8, aprenderás a utilizar protocolos de comunicación como HTTP y FTP. ¡No te pierdas el próximo capítulo!

¡Esperamos que hayas disfrutado creando melodías con tu ESP32! Si tienes alguna pregunta o necesitas ayuda, no dudes en preguntar.