c++
// Definir constantes para los pines
const int ENA = 2;  // Enable pin para motor A
const int IN1 = 3;  // Pin de entrada 1 para motor A
const int IN2 = 4;  // Pin de entrada 2 para motor A

const int ENB = 5;  // Enable pin para motor B
const int IN3 = 6;  // Pin de entrada 1 para motor B
const int IN4 = 7;  // Pin de entrada 2 para motor B

// Definir constantes para el joystick
const int X_AXIS = A0;  // Pino del eje X (izquierda-derecha)
const int Y_AXIS = A1;  // Pino del eje Y (arriba-abajo)

void setup() {
  Serial.begin(115200);  // Inicializar la comunicación serie a 115200 baudios

  // Configurar los pines como salida para los motores
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Inicializar los motores a parado
  digitalWrite(ENA, LOW);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(ENB, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void loop() {
  int xValue = analogRead(X_AXIS);  // Leer el valor del eje X
  int yValue = analogRead(Y_AXIS);  // Leer el valor del eje Y

  Serial.println("Valor X: " + String(xValue));
  Serial.println("Valor Y: " + String(yValue));

  // Calcular la velocidad de los motores en función de los valores de joystick
  int speedA = map(xValue, 0, 1023, -255, 255);  // Mapear el valor del eje X a una velocidad entre -255 y 255
  int speedB = map(yValue, 0, 1023, -255, 255);  // Mapear el valor del eje Y a una velocidad entre -255 y 255

  Serial.println("Velocidad A: " + String(speedA));
  Serial.println("Velocidad B: " + String(speedB));

  // Controlar los motores
  if (speedA > 0) {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    analogWrite(ENA, speedA);  // Envíe la velocidad al motor A
  } else if (speedA < 0) {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    analogWrite(ENA, -speedA);  // Envíe la velocidad negativa al motor A
  } else {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
  }

  if (speedB > 0) {
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    analogWrite(ENB, speedB);  // Envíe la velocidad al motor B
  } else if (speedB < 0) {
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    analogWrite(ENB, -speedB);  // Envíe la velocidad negativa al motor B
  } else {
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
  }

  delay(20);  // Esperar un poco para evitar sobrecargar el sistema
}