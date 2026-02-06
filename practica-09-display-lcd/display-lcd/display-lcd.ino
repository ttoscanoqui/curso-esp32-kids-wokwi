c++
// Incluir bibliotecas necesarias
#include <Wire.h>

// Definir constantes para los pines
const int SDA_PIN = 21; // Pin SDA del ESP32 conectado a SDA del LCD
const int SCL_PIN = 22; // Pin SCL del ESP32 conectado a SCL del LCD

// Definir variables para el LCD
int lcdAddress = 0x27; // Dirección I2C del LCD (puede variar)
int lcdColumns = 16; // Número de columnas del LCD
int lcdRows = 2; // Número de filas del LCD

void setup() {
  Serial.begin(115200); // Inicializar la comunicación serie a 115200 baudios
  
  // Inicializar los pines para I2C
  Wire.begin(SDA_PIN, SCL_PIN);
  
  // Inicializar el LCD
  lcdInit();
}

void loop() {
  // Mostrar mensaje en la pantalla LCD
  lcdPrint("Hola mundo!");
  
  // Esperar un poco antes de mostrar otro mensaje
  delay(2000);
  
  // Mostrar mensaje con información
  lcdPrint("Estado: Encendido");
  lcdSetCursor(0, 1); // Ir a la segunda fila y primer columna
  
  // Mostrar temperatura en grados Celsius (simulada)
  lcdPrint("Temp: 25°C");
  
  // Esperar un poco antes de volver al mensaje inicial
  delay(2000);
}

// Inicializar el LCD
void lcdInit() {
  Wire.beginTransmission(lcdAddress);
  Wire.write(0x33); // Iniciar comunicación con el LCD en modo 4-bit
  Wire.endTransmission();
  
  // Configurar el brillo del LCD (opcional)
  //Wire.beginTransmission(lcdAddress);
  //Wire.write(0x82); // Configurar brillo a 50%
  //Wire.endTransmission();
}

// Mostrar mensaje en la pantalla LCD
void lcdPrint(String message) {
  Wire.beginTransmission(lcdAddress);
  Wire.write(0x80 | (0x40)); // Ir a la primera fila y primer columna
  
  for (int i = 0; i < message.length(); i++) {
    Wire.write(message[i]);
  }
  
  Wire.endTransmission();
}

// Establecer cursor en la pantalla LCD
void lcdSetCursor(int row, int column) {
  Wire.beginTransmission(lcdAddress);
  Wire.write(0x80 | (row * lcdColumns + column));
  Wire.endTransmission();
}