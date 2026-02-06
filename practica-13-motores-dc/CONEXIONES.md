¡Vamos a conectar los componentes para controlar motores DC con ESP32!

**Recuerda:** Siempre lee las instrucciones antes de comenzar, y asegúrate de que todos los cables estén bien colocados para evitar dañar tus componentes.

**Componentes necesarios:**

1. **ESP32** (placa de microcontrolador)
2. **Motor DC** (motor con pines para conexión directa)
3. **Driver L298N** (placa de control para motores DC)
4. **Batería** (fuente de alimentación para el circuito)
5. **Cables** (cableado para conectar los componentes)

**Conexiones pin por pin:**

1. Conecta el **ESP32** a la protoboard:
	* VCC del ESP32 → +5V en la protoboard (paso de 5V)
	* GND del ESP32 → -GND en la protoboard
2. Conecta el **Driver L298N** a la protoboard:
	* VCC del Driver → +12V en la protoboard (paso de 12V, si tienes una batería de 9V)
	* GND del Driver → -GND en la protoboard
3. Conecta el **Motor DC** a la protoboard:
	* VCC del Motor → +5V en la protoboard (paso de 5V, desde ESP32)
	* GND del Motor → -GND en la protoboard
4. Conecta los cables de control entre el **ESP32 y Driver L298N**:
	* GPIO 2 del ESP32 → IN1 del Driver
	* GPIO 0 del ESP32 → IN2 del Driver
5. Conecta el **Batería** a la protoboard:
	* +V en la batería → VCC del Driver (paso de 12V)
	* -V en la batería → GND en la protoboard

**Colores de cables recomendados:**

| Cable | Color |
| --- | --- |
| ESP32 - VCC | Rojo |
| ESP32 - GND | Negro |
| Driver L298N - VCC | Azul claro |
| Driver L298N - GND | Negro |
| Motor DC - VCC | Amarillo |
| Motor DC - GND | Negro |

**Ubicación en la protoboard:**

Coloca los componentes de la siguiente manera:

* ESP32 al centro de la protoboard
* Driver L298N a lado del ESP32, hacia el lado izquierdo
* Motor DC debajo del Driver, conectado a -GND y +5V
* Batería en un lado de la protoboard, con el +V conectado al VCC del Driver

**Advertencias de seguridad:**

1. **No conectar los cables al revés**, ya que esto puede dañar tus componentes.
2. **No exceder la tensión máxima** (12V) en la batería o en el paso de 5V.
3. **No tocar las conexiones eléctricas mientras funcionen**.

**Tips para evitar errores comunes:**

1. **Lee las instrucciones varias veces** antes de comenzar a conectar los componentes.
2. **Verifica que todos los cables estén bien colocados y conectados**.
3. **No confundir los pines GND** (negros) con los pines VCC (rojos).

**Nota:** Si no tienes la batería necesaria, puedes simular el circuito en Wokwi (plataforma de simulación en línea). ¡Es una excelente manera de practicar sin correr riesgos!

¡Listo! Conectaste todos los componentes. Ahora, solo queda programar el ESP32 para controlar el motor DC. ¡Buena suerte y diviértete con esta práctica!