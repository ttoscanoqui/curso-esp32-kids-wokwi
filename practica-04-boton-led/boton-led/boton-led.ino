// Importamos la biblioteca de entrada/salida digital para ESP32
#include <Arduino.h>

// Definimos pines para botón y LED
const int BOTON_PIN = 15; // GPIO 15
const int LED_PIN = 2;    // GPIO 2

void setup() {
  // Inicializamos la comunicación serial a una velocidad de 115200 bps
  Serial.begin(115200);

  // Configuramos el botón como entrada con pull-up interno
  pinMode(BOTON_PIN, INPUT_PULLUP);
  
  // Configuramos el LED como salida
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Leemos el estado del botón
  int boton_estado = digitalRead(BOTON_PIN);

  // Si está presionado el botón, encendemos el LED
  if (boton_estado == LOW) {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("Botón presionado");
  } else {
    // Sino, apagamos el LED
    digitalWrite(LED_PIN, LOW);
  }

  // Esperamos durante 10ms antes de volver a revisar el estado del botón
  delay(10);
}