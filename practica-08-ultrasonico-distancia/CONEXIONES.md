¡Vamos a conectar nuestros componentes para la práctica del sensor ultrasónico con ESP32! Me alegra que estés aquí para aprender y hacerlo tú mismo.

**Componentes necesarios:**

1. Un módulo ESP32 (por ejemplo, WROVER)
2. Un sensor HC-SR04
3. Cables de conexión

**Conexiones pin por pin:**

**Sensor HC-SR04:**

* VCC del sensor → **+5V del protoboard** (el cable rojo)
* GND del sensor → **GND del protoboard** (el cable negro)

**ESP32:**

* GPIO 2 del ESP32 → **Resistencia de 10kΩ conectada al pin 3.3V del ESP32** (para el control de la señal TRIG, pero no es necesario para esta práctica)
* GPIO 5 del ESP32 → **GND del protoboard** (el cable negro)

**Nota:** No necesitas conectar la resistencia de 10kΩ en este caso.

**Conexiones sensor a ESP32:**

* VCC del sensor HC-SR04 (el pin más largo) → **VCC del ESP32** (el cable rojo)
* GND del sensor HC-SR04 → **GND del ESP32** (el cable negro)
* ECHO del sensor HC-SR04 → **GPIO 5 del ESP32** (el cable blanco, conecta el pin más corto a este GPIO)
* TRIG del sensor HC-SR04 → **Resistencia de 10kΩ conectada al pin 3.3V del ESP32** (no es necesario para esta práctica)

**Colores de cables recomendados:**

* Rojo para VCC
* Negro para GND
* Blanco para señales digitales

**Ubicación en el protoboard:**

1. Coloca la ESP32 en el lugar más grande del protoboard.
2. Conecta los cables al sensor HC-SR04 y colócalo en un lugar cercano a la ESP32.
3. Asegúrate de que las conexiones estén bien sujetas con las patillas.

**Advertencias de seguridad:**

* No conectes directamente los cables a la ESP32 sin protegerlos (como por ejemplo, usando una resistencia).
* Ten cuidado al conectar y desconectar los cables para evitar dañar los componentes.
* Asegúrate de que el protoboard no esté en contacto con objetos metálicos o líquidos.

**Tips para evitar errores comunes:**

1. Revisa las conexiones varias veces antes de encender la ESP32.
2. Asegúrate de que los cables estén bien conectados a cada componente.
3. No olvides conectar la batería al protoboard (si es necesario).

**Nota:** Si no tienes un protoboard, puedes simular esta conexión en Wokwi sin necesidad de cables reales.

¡Esto es todo! Ahora deberías tener tu protoboard conectada y lista para trabajar con el sensor ultrasónico. Recuerda que la práctica es la mejor manera de aprender. ¡Buena suerte en tu proyecto!