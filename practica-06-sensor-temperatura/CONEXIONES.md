¡Hola! Vamos a conectar los componentes para la práctica del termómetro digital con ESP32. Estoy emocionado de compartir este proceso contigo.

**Componentes necesarios:**

1. ESP32 (microcontrolador)
2. Sensor DHT11/DHT22 (sensor de temperatura y humedad)
3. Cables de conexión

**Conexiones pin por pin:**

**Sensor DHT11/DHT22**

* **VCC**: Conecta a +3,3V del ESP32
* **GND**: Conecta a GND del ESP32
* **DATA**: Conecta a GPIO 21 (GPIO_21) del ESP32

**ESP32**

* **5V**: No necesitamos conectar nada aquí, pero asegúrate de que no esté conectado a ningún otro componente
* **GND**: Conecta todos los GND a este pin para evitar cortocircuitos

**Ubicación en el protoboard:**

1. Coloca el sensor DHT11/DHT22 en una fila del protoboard.
2. Conecta VCC y GND al sensor, asegurándote de que estén cerca uno del otro.
3. Conecta DATA a GPIO 21 del ESP32, situando la conexión lo más cercana posible al sensor.

**Colores de cables recomendados:**

* Negro (GND): Utiliza un cable negro para conectar GND
* Rojo (+3,3V): Utiliza un cable rojo para conectar VCC
* Amarillo (DATA): Utiliza un cable amarillo para conectar DATA

**Advertencias de seguridad:**

1. Asegúrate de que el ESP32 esté desenchufado antes de comenzar a conectar los componentes.
2. No conectes nada al pin **5V**, ya que podría dañar los componentes.

**Tips para evitar errores comunes:**

1. Verifica que los pines del sensor estén correctamente identificados (VCC, GND y DATA).
2. Asegúrate de que los cables estén bien conectados a los pines correspondientes.
3. No sobrecargar los pines con demasiados componentes conectados.

**Nota:** Si prefieres simular el proceso en Wokwi sin necesidad de cables reales, puedes hacerlo siguiendo las instrucciones de la plataforma. ¡Es una excelente manera de practicar y evitar dañar tus componentes!

¡Eso es todo! Ahora deberías tener los componentes conectados correctamente para comenzar a trabajar en tu termómetro digital con ESP32.

**Recuerda:** Si tienes alguna pregunta o necesitas ayuda, no dudes en preguntar. ¡Buena suerte en la práctica!