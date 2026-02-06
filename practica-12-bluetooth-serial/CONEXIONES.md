¡Vamos a conectar nuestro ESP32 para la práctica de comunicación Bluetooth! Esto va a ser divertido.

**Primero, necesitaremos los siguientes componentes:**

* Un protoboard (también conocida como tabla de ensamblaje)
* El ESP32
* Al menos 5 cables jumper (3 para conectar GPIO y otros dos para el GND)
* Un LED rojo
* Una resistencia de 220Ω

**Conexiones pin por pin:**

1. Conecta el cable jumper de color **AZUL** del protoboard a la pata GPIO 2 del ESP32.
2. Conecta otro extremo del cable azul al lado izquierdo de la resistencia de 220Ω, en la pata inferior del protoboard (la que está más cerca del GND).
3. Conecta el otro extremo de la resistencia de 220Ω a la pata superior del LED rojo.
4. Conecta el cable jumper de color **ROJO** del protoboard al lado derecho del LED rojo, en la misma pata que la conexión con la resistencia.
5. Conecta el cable jumper de color **BLANCO** del protoboard al cátodo (el extremo negativo) del LED rojo.
6. Conecta otro extremo del cable blanco a la pata GND del ESP32.

**Colores de cables recomendados:**

* Azul para GPIO 2 y conexión con la resistencia
* Rojo para el anodo del LED y conexión directa
* Blanco para cátodo del LED y conexión con el GND

**Ubicación en el protoboard:**

* Coloca el ESP32 en la pata superior izquierda del protoboard.
* Ubica la resistencia de 220Ω cerca del GND, a la derecha del ESP32.
* Coloca el LED rojo cerca de la resistencia y el ESP32.

**Advertencias de seguridad:**

* Asegúrate de que todos los cables estén bien conectados para evitar cortocircuitos.
* No toques los pin del ESP32 mientras lo conectas, ya que pueden dañarse fácilmente.
* Utiliza guantes si te sientes incómodo al conectar cables.

**Tips para evitar errores comunes:**

* Verifica las conexiones con la linterna del protoboard antes de encender el ESP32.
* Asegúrate de que todos los componentes estén bien fijados en el protoboard.
* Si te equivocas, no tengas miedo de desconectar y rehacer la conexión.

**Nota:**
Si prefieres una experiencia más visual, puedes utilizar Wokwi para simular esta configuración antes de conectarla físicamente. ¡Es una forma divertida y segura de practicar!

¡Eso es todo! Ahora estás listo para conectar tu ESP32 y comenzar la práctica de comunicación Bluetooth. Recuerda seguir las instrucciones del tutorial y no dudes en preguntar si tienes alguna duda. ¡Buena suerte y diviértete!