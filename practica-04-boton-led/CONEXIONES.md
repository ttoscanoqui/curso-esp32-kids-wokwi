¡Genial! Vamos a conectar los componentes para la práctica de botón interactivo con el ESP32.

**Recuerda:** Si no tienes protoboard, puedes simular esto en Wokwi sin necesidad de cables reales.

**Componentes:**

* 1 x ESP32
* 1 x LED
* 1 x Pulsador (botón)
* 2 x Resistencias de 220Ω cada una
* Cables para conectar los componentes

**Conexiones pin por pin:**

1. **Pulsador (GPIO 0 del ESP32) → Resistencia 220Ω**
	* Conecta el cable rojo en la pata del GPIO 0 del ESP32.
	* Conecta el otro extremo del cable rojo con una de las patas de la resistencia 220Ω.
2. **Resistencia 220Ω → Ánodo del LED**
	* Conecta el otro extremo de la resistencia 220Ω con la pata del ánodo (positivo) del LED.
3. **Cátodo del LED → GND del ESP32**
	* Conecta un cable azul en la pata del cátodo (negativo) del LED.
	* Conecta el otro extremo del cable azul con una de las patas del GND del ESP32.
4. **Pulsador (GPIO 0 del ESP32) → Resistencia 220Ω**
	* Repite la misma conexión que en el paso 1, pero con el otro pin del pulsador conectado a la otra pata de la resistencia 220Ω.

**Colores de cables recomendados:**

* Rojo para los circuitos de señal (GPIO)
* Azul para los circuitos de voltaje bajo (GND)

**Ubicación en el protoboard:**

* Coloca la ESP32 en la primera línea del protoboard.
* Coloca la resistencia 220Ω a ambos lados de la ESP32, una cerca del GPIO 0 y la otra cerca del GND.
* Coloca el LED entre las dos patas de la resistencia 220Ω.
* Coloca el pulsador en la parte superior o inferior del protoboard.

**Advertencias de seguridad:**

* Asegúrate de que los cables estén bien sujetos para evitar cortocircuitos.
* No toques los pinchos del protoboard con tus dedos, puedes dañar tus manos.
* Evita conectar cables en reversa (rojo en azul, por ejemplo).

**Tips para evitar errores comunes:**

* Verifica que las conexiones estén bien hechas antes de encender el ESP32.
* Asegúrate de que no haya cortocircuitos entre los componentes o el protoboard.
* No conectes demasiados cables en una sola pata, puede causar daños en el componente.

¡Eso es todo! Con estas instrucciones detalladas, deberías poder conectar los componentes correctamente. Recuerda que puedes simular esto en Wokwi si no tienes protoboard. ¡Buena suerte y diviértete con tu práctica de botón interactivo!