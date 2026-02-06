**📚 Práctica 11: Servidor Web - Control desde el Navegador 🌐**

**Objetivo de aprendizaje**
En esta práctica, aprenderás a crear una página web que te permita controlar LEDs conectados a tu ESP32 utilizando un navegador web. ¡Imagina poder controlar tus dispositivos electrónicos con solo abrir un navegador!

**Badge de simulación Wokwi**
![Wokwi Badge](https://wokwi.com/assets/images/badge.svg)

Puedes probar esta práctica sin hardware en [Wokwi](https://wokwi.com/projects/new/esp32).

**Conceptos que aprenderás**

* **WebServer**: Un servidor web es un programa que proporciona acceso a recursos y servicios de manera remota. En este caso, tu ESP32 se convertirá en un servidor web que permite controlar LEDs.
* **HTML**: HTML (HyperText Markup Language) es el lenguaje de marcado utilizado para crear páginas web. Aprenderás a utilizar HTML para crear una página web simple que interactúe con tu ESP32.
* **HTTP requests**: Los HTTP requests son peticiones enviadas desde un navegador web a un servidor web para solicitar recursos o servicios.

**Materiales**

* Un ESP32
* Algunos LEDs (rojo, verde, azul)
* Cables para conectar los LEDs al ESP32

![Imagen de referencia: ESP32](https://www.esp32.com/wp-content/uploads/2019/09/ESP32.jpg)

![Imagen de referencia: LEDs](https://encrypted-tbn0.gstatic.com/images?q=tbn%3AANd9GcS8n5X2F4JgB5bLwV7Rq6Cj6rTmM1eKpHxVhQ&amp;s)

**Diagrama de conexión**

1. Conecta el ESP32 a tu PC o laptop utilizando un cable USB.
2. Conecta los LEDs al ESP32 utilizando cables y conectores adecuados.
3. Asegúrate de que la alimentación del ESP32 esté configurada correctamente.

**Sección: "🖥️ Simular en Wokwi"**

Si no tienes hardware disponible, puedes probar esta práctica en [Wokwi](https://wokwi.com/projects/new/esp32). Wokwi es una herramienta en línea que permite simular proyectos electrónicos sin necesidad de hardware.

**Explicación del código paso a paso**

1. Primero, debes incluir la biblioteca `WiFi` y `WebServer` en tu proyecto.
2. Luego, debes configurar el ESP32 como servidor web utilizando el método `begin()` de la clase `WebServer`.
3. A continuación, debes crear una página web simple utilizando HTML que permita controlar los LEDs. Puedes utilizar el lenguaje HTML para crear un formulario que envíe peticiones HTTP al servidor web.
4. Finalmente, debes utilizar las peticiones HTTP recibidas por el servidor web para controlar los LEDs.

**Reto 1: Agregar más funcionalidades**

* Agrega una función que permita cambiar la velocidad de los LEDs.
* Agrega una función que permita cambiar el color de los LEDs.

**Reto 2: Utilizar un sensor**

* Agrega un sensor de temperatura o luminosidad al proyecto y utilízalo para controlar los LEDs.

**Reto 3: Crear una interfaz gráfica**

* Utiliza una biblioteca como `Adafruit GFX` para crear una interfaz gráfica que permita controlar los LEDs de manera visual.

¿Qué sigue?

En la siguiente práctica, aprenderás a utilizar sensores y actuadores para crear un sistema de automatización inteligente. ¡Está lista para enfrentar el reto? 🤔