¡Hola! Me alegra ayudarte con la práctica del Carro Bluetooth - Control desde App Móvil utilizando el ESP32. Aquí te dejo una guía detallada para conectar los componentes en tu protoboard.

**Componentes**

* 1 x ESP32
* 2 x Motores DC
* 1 x Driver L298N
* 1 x Chasis completo
* 1 x Batería

**Conexiones pin por pin**

A continuación, te proporciono las conexiones detalladas entre los componentes. Recuerda que debes seguir el esquema de colores para los cables (más adelante te lo mencionaré).

1. **ESP32**
	* VCC del ESP32 → VCC del protoboard
	* GND del ESP32 → GND del protoboard
	* GPIO 2 del ESP32 → Pin 1 del Driver L298N (IN1)
	* GPIO 3 del ESP32 → Pin 2 del Driver L298N (IN2)
	* VCC del ESP32 → Pin 7 del Driver L298N (Enable)
	* GND del ESP32 → Pin 9 del Driver L298N (GND)
2. **Driver L298N**
	* VCC del Driver → VCC del protoboard
	* GND del Driver → GND del protoboard
3. **Motores DC**
	* Pin 1 del Motor 1 → Pin 1 del Driver L298N (IN1)
	* Pin 2 del Motor 1 → Pin 2 del Driver L298N (IN2)
	* Pin 3 del Motor 2 → Pin 5 del Driver L298N (IN3)
	* Pin 4 del Motor 2 → Pin 6 del Driver L298N (IN4)
4. **Batería**
	* VCC de la batería → VCC del protoboard
	* GND de la batería → GND del protoboard

**Colores de cables recomendados**

* Negro: GND (Tierra)
* Rojo: VCC (+5V o +3,3V según el ESP32)
* Amarillo o Dorado: GPIO 2 y 3 del ESP32
* Azul: Pin 1 y 2 del Driver L298N

**Ubicación en el protoboard**

Coloca los componentes en el protoboard de la siguiente manera:

* El ESP32 debe estar en la parte superior izquierda del protoboard.
* El Driver L298N debe estar a continuación del ESP32, en la misma fila.
* Los motores DC deben estar debajo del Driver L298N.
* La batería debe ser conectada al protoboard cerca de la parte inferior.

**Advertencias de seguridad**

1. Asegúrate de que los componentes estén bien sujetos al protoboard para evitar cortocircuitos.
2. Utiliza cables con resistencia adecuada (220Ω o 330Ω) para conectar los pines del ESP32 a los componentes.
3. No conectes la batería antes de conectar el ESP32 y el Driver L298N, ya que podría causar daño a los componentes.

**Tips para evitar errores comunes**

1. Asegúrate de que las conexiones estén bien identificadas (utiliza etiquetas o colores de cables para recordar qué es cada conexión).
2. Verifica que la polaridad de los componentes esté correcta.
3. No conectes los motores DC hasta que el ESP32 esté encendido y el Driver L298N esté configurado.

**Nota: también puedes simular esto en Wokwi sin necesidad de cables reales**

Si no tienes acceso a un protoboard físico, puedes utilizar la plataforma Wokwi para simular la conexión. Esto te permitirá probar y experimentar con el código antes de conectar los componentes físicos.

Recuerda que esta es una guía detallada para ayudarte a conectar los componentes en tu protoboard. Si tienes alguna duda o inquietud, no dudes en preguntar. ¡Buena suerte con la práctica!