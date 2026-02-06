**🎉 Práctica 9: Pantalla LCD - Mostrando Información 📊**
=====================================================

### Objetivo de aprendizaje

En esta práctica, aprenderás a trabajar con la pantalla LCD en tu proyecto ESP32. Debes ser capaz de mostrar mensajes y datos en la pantalla de manera eficiente.

### Badge de simulación Wokwi
https://wokwi.com/projects/new/esp32

¡Simula la práctica sin hardware! 🤖

### Conceptos a aprender

1. **I2C**: Es una forma de comunicación entre dispositivos que te permite enviar y recibir datos de manera rápida y eficiente.
2. **Wire library**: Una biblioteca de código que facilita la comunicación I2C en el ESP32.
3. **Interfaces**: Son los métodos mediante los cuales se interactúa con los componentes electrónicos.

Imagina que estás en un restaurante y necesitas pedir algo al camarero. La forma en que lo haces es una interfaz de comunicación. En este caso, el ESP32 y la pantalla LCD están "hablando" entre sí a través del I2C.

### Materiales

* Un ESP32 (tú ya tienes uno)
* Una pantalla LCD 16x2 I2C
* Cables para conectar los componentes

¡Importante! Asegúrate de tener todos los materiales antes de comenzar.

[Imagen de referencia: ESP32](https://www.amazon.com.mx/ESP-32-Wroom-32-Microcontrolador-Modulo/dp/B0739H2FZM)
[Imagen de referencia: LCD 16x2 I2C](https://www.amazon.com.mx/Coolermaster-Display-LCD-1602-IIC/dp/B06W5T3RJG)

### Diagrama de conexión

1. Conecta el ESP32 a la computadora mediante un cable USB.
2. Conecta la pantalla LCD al ESP32 utilizando los cables I2C (SCL y SDA).
3. Asegúrate de que los pines estén correctamente conectados.

[Diagrama de conexión](https://www.fritzing.org/wiki/File:ESP32_LCD_16x2_I2C.png)

### 🖥️ Simular en Wokwi

¿No tienes el hardware? ¡Simula la práctica sin problemas! Utiliza el badge de simulación Wokwi para probar tu código y asegurarte de que funcione correctamente antes de conectar los componentes.

### Explicación del código paso a paso

**Paso 1:** Incluye las bibliotecas necesarias en tu proyecto.
```c
#include <Wire.h>
```
**Paso 2:** Configura la comunicación I2C en el ESP32.
```c
Wire.begin();
```
**Paso 3:** Define una función para mostrar mensajes en la pantalla LCD.
```c
void showMessage(String message) {
  lcd.setCursor(0, 0);
  lcd.print(message);
}
```
**Paso 4:** Utiliza la función para mostrar un mensaje en la pantalla.
```c
showMessage("Hola, mundo!");
```

### Retos adicionales

1. **Cambia el color de fondo**: Puedes cambiar el color de fondo de la pantalla LCD utilizando las funciones de la biblioteca `LiquidCrystal`.
2. **Muestra datos en tiempo real**: Puedes mostrar datos en tiempo real en la pantalla LCD utilizando la función `showMessage()` y actualizando los valores cada segundo.
3. **Agrega una entrada de usuario**: Puedes agregar un botón o una entrada de texto para que el usuario pueda interactuar con la aplicación.

### ¿Qué sigue?

En la siguiente práctica, aprenderás a conectar sensores a tu proyecto ESP32 y leer datos en tiempo real. ¡Estamos emocionados por ver qué creaciones sorprendentes crearás! 🚀