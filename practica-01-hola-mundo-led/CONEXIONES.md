¡Vamos a conectar nuestros componentes para hacer que nuestro primer LED se encienda con ESP32!

**Conexiones pin por pin:**

1. **GPIO 2 del ESP32**: Conecta el cable blanco en la pin 2 (la segunda de la izquierda, contando desde arriba) del ESP32.
2. **Resistencia de 220Ω**: Conecta el otro extremo del cable blanco en la primera pin de 5V del protoboard (la primera de la izquierda).
3. **Ánodo del LED**: Conecta un cable rojo en la segunda pin de 5V del protoboard (la segunda de la izquierda, contando desde arriba). El otro extremo del cable lo conectaremos a la resistencia.
4. **Cátodo del LED**: Conecta un cable azul en la tercera pin de GND del protoboard (la tercera de la derecha).
5. **GND**: Conecta el otro extremo del cable azul en cualquier pin de GND del protoboard.

**Colores de cables recomendados:**

* Cables blancos para señal.
* Cables rojos para 5V.
* Cables azules para GND.

**Ubicación en el protoboard:**

1. Coloca la ESP32 alineada con los bordes del protoboard y asegúrate de que las pinas estén hacia arriba.
2. Conecta la resistencia entre las pinas 5V y GND, cerca de la ESP32.
3. Coloca el LED en la parte superior del protoboard, con el ánodo (el extremo largo) conectado a la resistencia.

**Advertencias de seguridad:**

* Asegúrate de que los cables estén bien sujetos para evitar cortocircuitos.
* No toques las pinas mientras se ejecuta el código en ESP32.
* Si notas algún olor extraño o humo, apaga inmediatamente y revisa la conexión.

**Tips para evitar errores comunes:**

* Verifica que los cables estén conectados a las pines correctas (GPIO 2, resistencia, ánodo del LED, cátodo del LED).
* Asegúrate de que la ESP32 esté configurada correctamente en el IDE.
* Si el código no funciona, revisa los cables y asegúrate de que estén bien sujetos.

**Nota:** Puedes simular esta práctica en Wokwi sin necesidad de cables reales. De esta manera podrás evitar posibles errores o daños a componentes.