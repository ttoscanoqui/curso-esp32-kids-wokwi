**¡Hola Mundo! - Encendiendo tu primer LED 🌟**

**Objetivo de aprendizaje:**
Aprender a conectar y programar tu ESP32 para encender un LED, explorando conceptos básicos como GPIO, digitalWrite, pinMode y delay.

**Badge de simulación Wokwi ⚙️**
Puedes probar este proyecto sin hardware en [https://wokwi.com/projects/new/esp32](https://wokwi.com/projects/new/esp32)

**Conceptos que aprenderás:**

* **GPIO (Entrada/Salida General)**: Son los pinos del ESP32 donde puedes conectar tus sensores y dispositivos.
* **digitalWrite**: Una función para enviar señales eléctricas a un pino específico.
* **pinMode**: Configurar el comportamiento de un pino (como entrada o salida).
* **delay**: Hacer que tu código espere durante un tiempo determinado.

**Materiales 🛠️**

| Componente | Imagen |
| --- | --- |
| ESP32 | https://es.wikipedia.org/wiki/ESP32#/media/File:ESP32_module.jpg |
| LED | https://www.amazon.com/s?k=led+rojo&ref=nb_sb_noss_2 |
| Resistencia 220Ω | https://www.ebay.es/itm/Resistencia-1K-2K-3K-4K5-5-6-7-8-10-22-47-100-220k-470k/283135441124 |
| Cables | https://www.amazon.com/s?k=cables+jumper+para+arduino |

**Diagrama de conexión ⚒️**

1. Conecta el LED al pino 2 del ESP32 (GPIO 0) usando un cable jumper.
2. Coloca la resistencia 220Ω entre el LED y el pino 2.
3. Conecta el otro extremo del cable jumper a cualquier pino GND del ESP32.

**Simular en Wokwi 🖥️**
Puedes probar este proyecto sin hardware en [https://wokwi.com/projects/new/esp32](https://wokwi.com/projects/new/esp32)

**Explicación del código 🔧**

1. Inicializa el ESP32 y establece la velocidad de comunicación.
```c
void setup() {
  Serial.begin(115200);
}
```
2. Configura el pino 2 como salida (GPIO 0).
```c
pinMode(2, OUTPUT);
```
3. Enviar una señal eléctrica al LED para encenderlo.
```c
digitalWrite(2, HIGH);
delay(1000); // Espera durante 1 segundo
```
4. Apagar el LED.
```c
digitalWrite(2, LOW);
```

**Retos adicionales 🚀**

1. **Enciende y apaga el LED con un botón**: Conecta un botón a un pino del ESP32 y configura la lógica para encender o apagar el LED según lo que se pulse.
2. **Añade más LEDs**: Conecta varios LEDs a diferentes pines y crea una secuencia de luces que se enciendan y apaguen en orden.
3. **Crea un circuito con resistencias**: Añade resistencias para ajustar la intensidad de los LEDs.

**¿Qué sigue? 🌟**
Ahora que has aprendido a encender un LED, estás listo para explorar más proyectos emocionantes en el mundo del ESP32. La próxima práctica te llevará a crear un proyecto con sensores y actuadores. ¡Estoy ansioso por ver lo que puedes crear!