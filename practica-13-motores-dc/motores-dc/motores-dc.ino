c++
// Práctica 13: Control de Motores DC - Movimiento Básico
// Componentes: ESP32, Motor DC, Driver L298N, Batería, Cables
// Conceptos: Control de motores, H-Bridge, Dirección

#include <Wire.h>

// Constantes para los pines del ESP32
const int PIN_MOTOR_A_IN1 = 12;  // Pin 12 como entrada 1 (A)
const int PIN_MOTOR_A_IN2 = 14;  // Pin 14 como salida 2 (B)
const int PIN_MOTOR_B_IN3 = 27;  // Pin 27 como entrada 3 (C)
const int PIN_MOTOR_B_IN4 = 26;  // Pin 26 como salida 4 (D)

// Constante para el frecuencia del PWM
const int FRECUENCIA_PWM = 1000;  // Hz

void setup() {
  Serial.begin(115200);  // Inicializar la comunicación serie

  // Configurar los pines como salidas
  pinMode(PIN_MOTOR_A_IN1, OUTPUT);
  pinMode(PIN_MOTOR_A_IN2, OUTPUT);
  pinMode(PIN_MOTOR_B_IN3, OUTPUT);
  pinMode(PIN_MOTOR_B_IN4, OUTPUT);

  // Inicializar el driver L298N (H-Bridge)
  digitalWrite(PIN_MOTOR_A_IN1, LOW);
  digitalWrite(PIN_MOTOR_A_IN2, LOW);
  digitalWrite(PIN_MOTOR_B_IN3, LOW);
  digitalWrite(PIN_MOTOR_B_IN4, LOW);
}

void loop() {
  // Movimiento en sentido horario
  Serial.println("Movimiento en sentido horario");
  digitalWrite(PIN_MOTOR_A_IN1, HIGH);  // Salida 1 (A) alta
  digitalWrite(PIN_MOTOR_A_IN2, LOW);   // Salida 2 (B) baja
  digitalWrite(PIN_MOTOR_B_IN3, HIGH);  // Salida 3 (C) alta
  digitalWrite(PIN_MOTOR_B_IN4, LOW);   // Salida 4 (D) baja
  delay(1000);

  // Movimiento en sentido antihorario
  Serial.println("Movimiento en sentido antihorario");
  digitalWrite(PIN_MOTOR_A_IN1, LOW);   // Salida 1 (A) baja
  digitalWrite(PIN_MOTOR_A_IN2, HIGH);  // Salida 2 (B) alta
  digitalWrite(PIN_MOTOR_B_IN3, LOW);   // Salida 3 (C) baja
  digitalWrite(PIN_MOTOR_B_IN4, HIGH);  // Salida 4 (D) alta
  delay(1000);

  // Parada del motor
  Serial.println("Parada del motor");
  digitalWrite(PIN_MOTOR_A_IN1, LOW);
  digitalWrite(PIN_MOTOR_A_IN2, LOW);
  digitalWrite(PIN_MOTOR_B_IN3, LOW);
  digitalWrite(PIN_MOTOR_B_IN4, LOW);
  delay(1000);
}