// Bibliotecas necesarias
#include <WiFi.h>
#include <BT.h>

// Pines utilizados para controlar los motores
const int MOTOR_IZQ_A = 12;
const int MOTOR_IZQ_B = 13;
const int MOTOR_DER_A = 14;
const int MOTOR_DER_B = 27;

// Variable para almacenar la velocidad del motor izquierdo
int velocidadIzquierda = 0;

// Variable para almacenar la velocidad del motor derecho
int velocidadDerecha = 0;

void setup() {
  // Inicializar los pines como salidas
  pinMode(MOTOR_IZQ_A, OUTPUT);
  pinMode(MOTOR_IZQ_B, OUTPUT);
  pinMode(MOTOR_DER_A, OUTPUT);
  pinMode(MOTOR_DER_B, OUTPUT);

  // Conectar a la red Wi-Fi
  WiFi.begin("TuRed", "TuContraseña");

  // Inicializar el módulo Bluetooth
  BT.begin();

  // Configurar el baudrate para la comunicación serie
  Serial.begin(115200);
}

void loop() {
  // Comprobar si se ha conectado a un dispositivo bluetooth
  if (BT.isConnected()) {
    // Leer datos del dispositivo bluetooth
    String mensaje = BT.readString();
    
    // Analizar el mensaje recibido y controlar los motores según sea necesario
    if (mensaje == "izquierda") {
      velocidadIzquierda = 255;
      velocidadDerecha = 0;
    } else if (mensaje == "derecha") {
      velocidadIzquierda = 0;
      velocidadDerecha = 255;
    } else if (mensaje == "adelante") {
      velocidadIzquierda = 128;
      velocidadDerecha = 128;
    } else if (mensaje == "atras") {
      velocidadIzquierda = -128;
      velocidadDerecha = -128;
    }

    // Actualizar los valores de velocidad en los motores
    analogWrite(MOTOR_IZQ_A, abs(velocidadIzquierda));
    digitalWrite(MOTOR_IZQ_B, digitalPinHigh(velocidadIzquierda > 0 ? HIGH : LOW));
    analogWrite(MOTOR_DER_A, abs(velocidadDerecha));
    digitalWrite(MOTOR_DER_B, digitalPinHigh(velocidadDerecha > 0 ? HIGH : LOW));

    // Imprimir por consola los valores de velocidad
    Serial.println("Velocidad izquierda: " + String(velocidadIzquierda) + ", Velocidad derecha: " + String(velocidadDerecha));
  }
}