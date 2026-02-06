**📚 Conecta tu ESP32 a la red WiFi - Práctica 10 📱**

**Objetivo de aprendizaje:**
En esta práctica, aprenderás a conectar tu ESP32 a una red WiFi y enviar datos por Internet. ¡Esto es emocionante! 💻

**Badge de simulación Wokwi**
[![Simulación en Wokwi](https://img.shields.io/badge/Simula-con-Wokwi-<COLOR>.svg)](https://wokwi.com/projects/new/esp32)

**Conceptos que aprenderás:**

* **WiFi.h**: Es una biblioteca de código abierto que permite a tu ESP32 conectarse a redes WiFi.
* **SSID**: Es el nombre de la red WiFi a la que quieres conectar. Puedes pensar en ello como un apodo para tu red.
* **Password**: Es la contraseña para acceder a la red WiFi. No compartas esta información con nadie, es como una contraseña secreta 🤐
* **IP Address**: Es la dirección de Internet de tu ESP32. Puede ser pensado como el "dirección postal" de tu dispositivo en Internet.

**Materiales necesarios:**

* Un ESP32 (conectado a un microcomputador o directamente al puente de desarrollo)
* Una placa de desarrollo con ESP32
* Cables y conectores para conectar la placa de desarrollo al microcomputador
* [Conecta el ESP32 a una red WiFi](https://es.wikipedia.org/wiki/Wi-Fi#/media/File:Wi-Fi.png)

**Diagrama de conexión**

1. Conecta tu ESP32 a un microcomputador o directamente al puente de desarrollo.
2. Conecta la placa de desarrollo con cables y conectores.
3. Conecta el ESP32 a una red WiFi segura.

![Conexión en esp32](https://es.wikipedia.org/wiki/ESP32#/media/File:Esquema_de_conexion.png)

**Simular en Wokwi**
¡Puedes simular esta práctica sin hardware! 🔥 En Wokwi puedes crear un proyecto y probar la conexión WiFi sin tener que manipular el hardware. ¡Es una forma divertida de aprender!

1. Ingresa a [Wokwi](https://wokwi.com/projects/new/esp32)
2. Selecciona "ESP32" como dispositivo
3. Conecta tu cuenta de GitHub para acceder a proyectos previos

**Código paso a paso:**

Puedes encontrar el código completo en este repositorio: [Repositorio ESP32](https://github.com/user/NOMBRE-DEL-REPOSITORIO)

1. Agrega la biblioteca WiFi.h al archivo `main.ino`
```cpp
#include <WiFi.h>
```
2. Conecta a la red WiFi usando el nombre y contraseña de tu red favorita:
```cpp
const char* ssid = "Nombre-de-tu-red";
const char* password = "Contraseña-de-tu-red";
```
3. Configura la conexión WiFi en el método `setup()`:
```cpp
void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
}
```
4. Envía datos por Internet usando el protocolo HTTP:
```cpp
void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    String server = "http://example.com";
    client.println("GET / HTTP/1.0");
    client.println();
  }
  delay(10000);
}
```
**Retos adicionales:**

* **Conecta a una red WiFi pública**: ¡Probá conectar tu ESP32 a una red WiFi pública! 🤔
* **Envía datos de sensores**: Añade un sensor y envíale los valores al servidor. 💡
* **Implementa autenticación básica**: Añade autenticación a la conexión WiFi para proteger tu proyecto.

**¿Qué sigue?**

¡La próxima práctica es aún más emocionante! 🔥 ¡Conecta tu ESP32 a un sensor de movimiento y envíale los valores al servidor! 📈