# 🛠️ Guía de Instalación

## Instalación del IDE Arduino

### Windows
1. Descarga Arduino IDE desde: https://www.arduino.cc/en/software
2. Ejecuta el instalador
3. Sigue los pasos del asistente

### Configuración para ESP32
1. Abre Arduino IDE
2. Ve a **Archivo → Preferencias**
3. En "Gestor de URLs Adicionales de Tarjetas", agrega:
   ```
   https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
   ```
4. Ve a **Herramientas → Placa → Gestor de tarjetas**
5. Busca "ESP32" y presiona "Instalar"

## Instalación de Drivers
- ESP32 generalmente usa CH340 o CP2102
- Descarga drivers desde el sitio oficial del fabricante

## Verificación
1. Conecta tu ESP32
2. Selecciona **Herramientas → Placa → ESP32 Dev Module**
3. Selecciona el puerto COM correcto
4. Carga el ejemplo "Blink"

## Alternativa: ¡Simula en Wokwi!
Si no tienes Arduino IDE o hardware, puedes practicar en https://wokwi.com
Ver [GUIA_WOKWI.md](GUIA_WOKWI.md) para más información.
