// Práctica: Motor DC
// Descripción: Controla motor DC
// Componentes: ESP32, Motor DC

#include <Arduino.h>

// Definición de pines
const int MOTOR_A = 12; // GPIO 12
const int MOTOR_B = 13; // GPIO 13

void setup() {
  // Configuración inicial del pin para salida
  pinMode(MOTOR_A, OUTPUT);
  pinMode(MOTOR_B, OUTPUT);

  // Inicializar la comunicación serial a 115200 baudios
  Serial.begin(115200);

  // Imprimir mensaje de inicio en la consola
  Serial.println("Motor DC controlado con ESP32");
}

void loop() {
  // Configuración del motor para girar hacia adelante
  digitalWrite(MOTOR_A, HIGH);
  digitalWrite(MOTOR_B, LOW);

  // Impedir que el motor gire hacia atrás al mismo tiempo
  delay(1000); // Tiempo de ejecución

  // Configuración del motor para girar hacia atras
  digitalWrite(MOTOR_A, LOW);
  digitalWrite(MOTOR_B, HIGH);

  // Impedir que el motor gire hacia adelante al mismo tiempo
  delay(1000); // Tiempo de ejecución

  // Imprimir mensaje de actualización en la consola
  Serial.println("Motor girando...");
}