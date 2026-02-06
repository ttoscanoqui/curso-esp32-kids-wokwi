c++
// Práctica 16: Carro Bluetooth - Control desde App Móvil

// Importar bibliotecas necesarias
#include <WiFi.h>
#include <BluetoothDevice.h>

// Definir constantes para los pines
const int PIN_MOTOR_LEFT_FORWARD = 12; // GPIO 12 (D6)
const int PIN_MOTOR_LEFT_BACKWARD = 14; // GPIO 14 (D5)
const int PIN_MOTOR_RIGHT_FORWARD = 27; // GPIO 27 (D13)
const int PIN_MOTOR_RIGHT_BACKWARD = 25; // GPIO 25 (D11)

// Definir pines para Bluetooth
const int PIN_BLUETOOTH_TX = 17; // GPIO 17 (D2)
const int PIN_BLUETOOTH_RX = 16; // GPIO 16 (D0)

// Definir variables para controlar el motor
int motorLeftSpeed = 0;
int motorRightSpeed = 0;

void setup() {
  // Inicializar pines como salida
  pinMode(PIN_MOTOR_LEFT_FORWARD, OUTPUT);
  pinMode(PIN_MOTOR_LEFT_BACKWARD, OUTPUT);
  pinMode(PIN_MOTOR_RIGHT_FORWARD, OUTPUT);
  pinMode(PIN_MOTOR_RIGHT_BACKWARD, OUTPUT);

  // Configurar Bluetooth
  Serial.begin(115200); // Inicializar puerto serie a 115200 bps

  // Conectar con la red WiFi (en este caso se asume que el dispositivo está conectado a una red)
  WiFi.begin("Nombre de la red", "Clave de la red");

  // Esperar a que se complete la conexión
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Conectando a la red...");
  }

  Serial.println("Conexión establecida!");
}

void loop() {
  // Leer datos desde el dispositivo Bluetooth (en este caso se asume que se está conectado al mismo)
  String data = "";
  while (Serial.available()) {
    char c = Serial.read();
    data += c;
  }

  // Procesar los comandos
  if (data == "F") { // F: Avanzar
    motorLeftSpeed = 255; // Velocidad máxima para el motor izquierdo
    motorRightSpeed = 255; // Velocidad máxima para el motor derecho
  } else if (data == "B") { // B: Retroceder
    motorLeftSpeed = -255; // Velocidad mínima para el motor izquierdo
    motorRightSpeed = -255; // Velocidad mínima para el motor derecho
  } else if (data == "L") { // L: Girar a la izquierda
    motorLeftSpeed = -255; // Velocidad mínima para el motor izquierdo
    motorRightSpeed = 255; // Velocidad máxima para el motor derecho
  } else if (data == "R") { // R: Girar a la derecha
    motorLeftSpeed = 255; // Velocidad máxima para el motor izquierdo
    motorRightSpeed = -255; // Velocidad mínima para el motor derecho
  }

  // Enviar datos al driver del motor (en este caso se asume que es un L298N)
  digitalWrite(PIN_MOTOR_LEFT_FORWARD, HIGH);
  analogWrite(PIN_MOTOR_LEFT_BACKWARD, abs(motorLeftSpeed));
  digitalWrite(PIN_MOTOR_RIGHT_FORWARD, HIGH);
  analogWrite(PIN_MOTOR_RIGHT_BACKWARD, abs(motorRightSpeed));

  // Esperar un poco antes de verificar si hay nuevos datos
  delay(50);
}