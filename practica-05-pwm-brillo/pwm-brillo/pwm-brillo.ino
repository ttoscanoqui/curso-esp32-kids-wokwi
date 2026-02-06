c++
// Configuración del pin del LED y la resistencia
const int ledPin = 13; // Pin para conectar el LED (PWM)
const int resistencia = 220; // Valor de la resistencia en ohmios

void setup() {
  Serial.begin(115200); // Inicializa la comunicación serial a 115200 baudios
  pinMode(ledPin, OUTPUT); // Configura el pin del LED como salida (PWM)
}

void loop() {
  // Ajusta el brillo del LED con una señal PWM
  for (int i = 0; i <= 255; i++) { // Cíclico desde 0 a 255
    analogWrite(ledPin, i); // Envía la señal PWM al pin del LED
    Serial.println("Brillo: " + String(i)); // Imprime el valor en la consola serial
    delay(50); // Retraso de 50 ms para ver la transición
  }
  
  for (int i = 255; i >= 0; i--) { // Cíclico desde 255 a 0
    analogWrite(ledPin, i); // Envía la señal PWM al pin del LED
    Serial.println("Brillo: " + String(i)); // Imprime el valor en la consola serial
    delay(50); // Retraso de 50 ms para ver la transición
  }
}