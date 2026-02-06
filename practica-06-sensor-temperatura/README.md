**📈 Termómetro Digital con ESP32 📊**
==========================

¡Bienvenidos a la práctica 6! En esta actividad, aprenderás a leer y mostrar la temperatura ambiente utilizando un sensor DHT11/DHT22 conectado a tu ESP32. Prepárate para descubrir el mundo de los sensores y las librerías en Arduino.

**Objetivo de aprendizaje**
------------------------

* Leer y entender cómo funcionan los sensores
* Utilizar una librería específica para leer datos del sensor DHT11/DHT22
* Visualizar la temperatura ambiente en el Serial Monitor

**Badge de simulación Wokwi 📝**
-----------------------------

Puedes probar este proyecto sin hardware utilizando [Wokwi](https://wokwi.com/projects/new/esp32), un simulador en línea de circuitos electrónicos. ¡Es una excelente manera de experimentar antes de conectar tu ESP32!

**Conceptos a aprender**
-----------------------

* **Sensores**: Son dispositivos que capturan información del entorno y la envían al microcontrolador. En este caso, el sensor DHT11/DHT22 mide la temperatura y la humedad relativa.
* **Librerías**: Son conjuntos de funciones predefinidas que facilitan la programación en Arduino. En esta práctica, utilizarás la librería `DHT` para leer datos del sensor.

**Materiales necesarios**
------------------------

* ESP32
* Sensor DHT11/DHT22 📈
* Cables (GPIO0 y GPIO5)
* Conector USB

Imágenes de referencia:
* [Sensor DHT11](https://i.imgur.com/9j4J6oL.png)
* [Conector USB para ESP32](https://i.imgur.com/RmXsT6d.png)

**Diagrama de conexión**
-------------------------

1. Conecta el pin VCC del sensor al pin 3V3 del ESP32 (GPIO0).
2. Conecta el pin GND del sensor al pin GND del ESP32.
3. Conecta el pin DATA del sensor a cualquier otro pin GPIO (GPIO5 en este ejemplo).

**🖥️ Simular en Wokwi**
-------------------------

Puedes probar y ajustar tu código sin necesidad de hardware físico. ¡Es una excelente manera de evitar errores y asegurarte de que todo funciona correctamente!

**Explicación del código**
---------------------------

El código utiliza la librería `DHT` para leer datos del sensor DHT11/DHT22. Está dividido en las siguientes secciones:

1. **Incluir librerías**: Se incluye la librería `DHT` y se definen las funciones para leer los datos del sensor.
2. **Inicializar el sensor**: Se inicializa el sensor con la función `dht.begin()`.
3. **Leer temperatura y humedad**: Se lee la temperatura y la humedad relativa con las funciones `dht.readTemperature()` y `dht.readHumidity()`.
4. **Mostrar resultados en Serial Monitor**: Los valores leídos se imprimen en el Serial Monitor.

Código:
```cpp
#include <DHT.h>

#define DHTPIN GPIO5   // Digital pin connected to the DHT output
#define DHTTYPE DHT11  // DHT 11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200); // Inicializa la comunicación serial a 115200 bps
  dht.begin();
}

void loop() {
  int temperatura = dht.readTemperature(); // Lee la temperatura en grados Celsius
  int humedad = dht.readHumidity(); // Lee la humedad relativa

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");

  Serial.print("Humedad relativa: ");
  Serial.print(humedad);
  Serial.println("%");

  delay(2000); // Espera 2 segundos antes de leer nuevamente
}
```

**Retos adicionales**
--------------------

1. **Muestre la temperatura en grados Fahrenheit**: Utiliza una función para convertir la temperatura a Fahrenheit.
2. **Añada un botón para reiniciar el ESP32**: Conecta un botón a un pin GPIO y utilice la librería `Bounce2` para detectar pulsaciones.
3. **Crea una gráfica de temperatura y humedad**: Utiliza la librería `Adafruit_GFX` para crear una pantalla LCD que muestre los valores leídos.

**¿Qué sigue?**
----------------

Con esta práctica, has aprendido a leer datos de un sensor DHT11/DHT22 y mostrarlos en el Serial Monitor. En la próxima práctica, explorarás cómo utilizar sensores más avanzados y crearás un sistema de monitoreo de temperatura y humedad para tu hogar o laboratorio.

¡No te olvides de compartir tus proyectos con nosotros! 📦