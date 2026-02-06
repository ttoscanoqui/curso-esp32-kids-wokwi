// Importar la biblioteca de entrada/salida digital (DigitalIn, DigitalOut)
#include <Arduino.h>

// Definir pines y variables
const int LED_PIN = 2; // Pino para el LED
bool ledEstado = LOW; // Estado inicial del LED (LOW)

void setup() {
  // Inicializar la comunicación serie a 115200 baudios
  Serial.begin(115200);

  // Configurar el pin como salida
  pinMode(LED_PIN, OUTPUT);
  
  // Imprimir mensaje en consola para debug
  Serial.println("Iniciando LED parpadeante");
}

void loop() {
  // Encender y apagar el LED con diferentes velocidades de parpadeo
  for (int i = 0; i < 3; i++) {
    ledEstado = HIGH;
    delay(500);
    ledEstado = LOW;
    delay(500);

    ledEstado = HIGH;
    delay(200);
    ledEstado = LOW;
    delay(200);

    ledEstado = HIGH;
    delay(100);
    ledEstado = LOW;
    delay(100);
  }
  
  // Imprimir mensaje en consola para debug
  Serial.println("LED parpadeante");
}