¡Vamos a conectar nuestros componentes en la protoboard para crear nuestra melodía musical con el Buzzer y el ESP32!

**Componentes necesarios:**

* Un ESP32 (tu tarjeta de microcontrolador)
* Un Buzzer pasivo
* Cables para conectar los componentes entre sí

**Conexiones pin por pin:**

1. **GPIO 2 del ESP32 → Resistencia 220Ω**
	* Conecta el cable rojo en la pata GPIO 2 del ESP32.
	* Asegúrate de que el otro extremo esté conectado a la resistencia 220Ω.
	* La punta negra de la resistencia debe estar hacia abajo, mirando hacia la parte posterior de la protoboard.
2. **Cátodo del Buzzer → Cuerpo de la Resistencia 220Ω**
	* Conecta el cable verde en la pata del cátodo del Buzzer (el lado con la "V" o el símbolo negativo).
	* Asegúrate de que el otro extremo esté conectado al cuerpo de la resistencia 220Ω.
3. **Ánodo del Buzzer → GND del ESP32**
	* Conecta el cable azul en la pata del ánodo del Buzzer (el lado sin la "V" o el símbolo negativo).
	* Asegúrate de que el otro extremo esté conectado a la pata GND del ESP32.

**Colores de cables recomendados:**

* Rojo para el GPIO 2 del ESP32 y la resistencia 220Ω
* Verde para el cátodo del Buzzer y el cuerpo de la resistencia 220Ω
* Azul para el ánodo del Buzzer y la pata GND del ESP32

**Ubicación en la protoboard:**

1. Coloca la protoboard sobre una superficie plana.
2. Ubica los componentes en la siguiente posición:
	* El ESP32 en el lado izquierdo de la protoboard, cerca del borde superior.
	* La resistencia 220Ω debajo del ESP32.
	* El Buzzer pasivo a un lado de la protoboard, cerca del borde inferior.

**Advertencias de seguridad:**

1. Asegúrate de que los cables no estén sobrecargados o cortados, ya que esto puede causar daño al componente conectado.
2. No toques las placas metálicas de la protoboard con tus dedos desnudos, ya que esto puede causar un choque eléctrico.

**Tips para evitar errores comunes:**

1. Asegúrate de conectar los cables a la pata correcta del componente.
2. Verifica que los cables no estén sobrecargados o doblados en exceso.
3. Si no sabes qué hacer, busca ayuda en línea o consulta con un adulto experimentado.

**Nota: También puedes simular esto en Wokwi sin necesidad de cables reales**

¡Excelente! Ahora que tenemos todos los componentes conectados, ¡podemos empezar a programar nuestro proyecto para crear melodías musicales con el Buzzer y el ESP32!