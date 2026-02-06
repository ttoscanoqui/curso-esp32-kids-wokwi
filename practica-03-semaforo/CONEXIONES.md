¡Vamos a conectar el semáforo inteligente!

**Conexiones pin por pin:**

 Primero, debemos saber qué pines del ESP32 necesitamos para conectar los LEDs. El ESP32 tiene muchos pines, pero solo necesitaremos algunos.

*   El LED rojo se conectará al GPIO 2 (P2) del ESP32.
*   El LED amarillo se conectará al GPIO 4 (P4) del ESP32.
*   El LED verde se conectará al GPIO 5 (P5) del ESP32.

**Conexiones de cada led:**

1.  **LED ROJO**
    *   Conecta el cable blanco a **GPIO 2 (P2)** en la tarjeta de protoboard.
    *   Conecta un extremo del cable rojo a **GPIO 2 (P2)**, al otro extremo conectalo a una resistencia de 220Ω. Debe estar entre GPIO 2 y el pin positivo de la fuente de alimentación (+3,3V).
    *   Conecta uno de los cables negros a la resistencia de 220Ω. El cable debe ir desde la resistencia hacia el LED.
    *   Conecta el otro extremo del cable negro al **ÁNODO (POSITIVO)** del LED rojo.
    *   Conecta un cable amarillo a la misma resistencia y luego conecta este cable al **CÁTODO (NEGATIVO)** del LED rojo. Luego conectalo a GND.
2.  **LED AMARILLO**
    *   Conecta el cable blanco a **GPIO 4 (P4)** en la tarjeta de protoboard.
    *   Conecta un extremo del cable amarillo a **GPIO 4 (P4)**, al otro extremo conectalo a una resistencia de 220Ω. Debe estar entre GPIO 4 y el pin positivo de la fuente de alimentación (+3,3V).
    *   Conecta uno de los cables negros a la resistencia de 220Ω. El cable debe ir desde la resistencia hacia el LED.
    *   Conecta el otro extremo del cable negro al **ÁNODO (POSITIVO)** del LED amarillo.
    *   Conecta un cable rojo a la misma resistencia y luego conecta este cable al **CÁTODO (NEGATIVO)** del LED amarillo. Luego conectalo a GND.
3.  **LED VERDE**
    *   Conecta el cable blanco a **GPIO 5 (P5)** en la tarjeta de protoboard.
    *   Conecta un extremo del cable verde a **GPIO 5 (P5)**, al otro extremo conectalo a una resistencia de 220Ω. Debe estar entre GPIO 5 y el pin positivo de la fuente de alimentación (+3,3V).
    *   Conecta uno de los cables negros a la resistencia de 220Ω. El cable debe ir desde la resistencia hacia el LED.
    *   Conecta el otro extremo del cable negro al **ÁNODO (POSITIVO)** del LED verde.
    *   Conecta un cable azul a la misma resistencia y luego conecta este cable al **CÁTODO (NEGATIVO)** del LED verde. Luego conectalo a GND.

**Colores de cables recomendados:**

*   Negro: negativo o GND
*   Amarillo: positivo (+3,3V)
*   Blanco: GPIO

**Ubicación en el protoboard:**

Asegúrese de tener suficiente espacio para conectar todos los componentes. Los LEDs deben estar separados unos de otros. Los pines del ESP32 y las resistencias deben estar cerca del LED correspondiente.

**Advertencias de seguridad:**

*   Asegúrese de que el ESP32 esté configurado correctamente en la IDE (IDE es el entorno de desarrollo integrado, como Arduino IDE) antes de conectarlo a la fuente de alimentación.
*   Utilice una fuente de alimentación adecuada para el ESP32. La fuente de alimentación debe ser capaz de proporcionar 3,3V a los pines del ESP32.

**Tips para evitar errores comunes:**

1.  **Revisa las conexiones**: Asegúrese de que todas las conexiones estén correctas y no haya cables sueltos.
2.  **Verifica la configuración en la IDE**: Asegúrese de que el pin del ESP32 esté configurado correctamente para cada LED.
3.  **No conecte los pines negativos a la fuente de alimentación**: Esto puede causar daño al ESP32.

**Nota:** Si no tiene cables reales, también puede simular esta práctica en Wokwi.