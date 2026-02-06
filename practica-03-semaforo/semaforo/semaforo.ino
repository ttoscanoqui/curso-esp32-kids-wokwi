// Semáforo simulado con ESP32 y LEDs
// Componentes: 3 LEDs, 3 Resistencias 220Ω
// Pines utilizados:
// - LED_ROJO: GPIO 2
// - LED_AMARILLO: GPIO 4
// - LED_VERDE: GPIO 5

#include <Arduino.h>

// Constantes para los pines de los LEDs
const int LED_ROJO = 2;
const int LED_AMARILLO = 4;
const int LED_VERDE = 5;

void setup() {
  // Inicializa la comunicación serial a 115200 baudios
  Serial.begin(115200);
  
  // Configura los pines como salida para los LEDs
  pinMode(LED_ROJO, OUTPUT);
  pinMode(LED_AMARILLO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);

  // Imprime un mensaje en la consola para confirmar el inicio del semáforo
  Serial.println("Semáforo iniciado");
}

void loop() {
  // Simula el funcionamiento del semáforo con una duración de 10 segundos por cada estado
  for (int i = 0; i < 30; i++) { // 3 ciclos x 10 segundos = 30 segundos en total
    // Estado rojo: 5 segundos
    digitalWrite(LED_ROJO, HIGH);
    digitalWrite(LED_AMARILLO, LOW);
    digitalWrite(LED_VERDE, LOW);
    delay(5000);

    // Estado amarillo: 2 segundos
    digitalWrite(LED_ROJO, LOW);
    digitalWrite(LED_AMARILLO, HIGH);
    digitalWrite(LED_VERDE, LOW);
    delay(2000);

    // Estado verde: 3 segundos
    digitalWrite(LED_ROJO, LOW);
    digitalWrite(LED_AMARILLO, LOW);
    digitalWrite(LED_VERDE, HIGH);
    delay(3000);
  }
}