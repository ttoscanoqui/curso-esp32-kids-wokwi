// Práctica: Carro con Joystick
// Componentes: ESP32, 2 Motores, Joystick

#include <Wire.h>
#include <Adafruit_MotorShield.h>

// Definición de pines para motores y joystick
const int MOTOR_IZQ_A = 12;
const int MOTOR_IZQ_B = 13;
const int MOTOR_DER_A = 14;
const int MOTOR_DER_B = 27;
const int JOY_VRX = 34;
const int JOY_VRY = 35;

// Creación de objetos para controlar los motores
Adafruit_DCMotor motorIzq(MOTOR_IZQ_A, MOTOR_IZQ_B);
Adafruit_DCMotor motorDer(MOTOR_DER_A, MOTOR_DER_B);

void setup() {
  Serial.begin(115200); // Inicialización del puerto serie a 115200 baudios

  // Configuración de pines como salida para motores
  pinMode(MOTOR_IZQ_A, OUTPUT);
  pinMode(MOTOR_IZQ_B, OUTPUT);
  pinMode(MOTOR_DER_A, OUTPUT);
  pinMode(MOTOR_DER_B, OUTPUT);

  // Inicialización de los motores a velocidad 0
  motorIzq.setSpeed(0);
  motorDer.setSpeed(0);
}

void loop() {
  int joyVrx = analogRead(JOY_VRX); // Lectura del valor en el eje X del joystick
  int joyVry = analogRead(JOY_VRY); // Lectura del valor en el eje Y del joystick

  Serial.println("Valor eje X: " + String(joyVrx)); // Imprimir valor de eje X en puerto serie
  Serial.println("Valor eje Y: " + String(joyVry)); // Imprimir valor de eje Y en puerto serie

  if (joyVrx > 500) { // Si el valor en el eje X es mayor que 500, gira hacia la derecha
    motorIzq.setSpeed(255);
    motorDer.setSpeed(-255);
  } else if (joyVrx < 500) { // Si el valor en el eje X es menor que 500, gira hacia la izquierda
    motorIzq.setSpeed(-255);
    motorDer.setSpeed(255);
  } else {
    motorIzq.setSpeed(0); // Si el valor en el eje X es igual a 500, se detiene
    motorDer.setSpeed(0);
  }

  if (joyVry > 500) { // Si el valor en el eje Y es mayor que 500, gira hacia arriba
    motorIzq.setSpeed(-255); // Giro hacia la izquierda para subir
    motorDer.setSpeed(-255);
  } else if (joyVry < 500) { // Si el valor en el eje Y es menor que 500, gira hacia abajo
    motorIzq.setSpeed(255); // Giro hacia la derecha para bajar
    motorDer.setSpeed(255);
  }

  delay(20); // Retraso de 20 ms para evitar sobrecarga del procesador
}