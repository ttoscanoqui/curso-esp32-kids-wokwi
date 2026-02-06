// Importar la biblioteca de entrada/salida digital y analógica
#include <Arduino.h>

// Definir el pin del LED como salida
const int ledPin = 2; // GPIO 2

void setup() {
  // Inicializar la comunicación serie a 115200 baudios
  Serial.begin(115200);
  
  // Configurar el pin del LED como salida
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Leer los datos de la entrada analógica (pin A0)
  int anchoPWM = analogRead(A0); // Lectura desde el pin A0
  
  // Mapear el valor leído a un valor entre 0 y 255
  int pwmValue = map(anchoPWM, 0, 1023, 0, 255);
  
  // Mostrar el valor de PWM en la consola serie
  Serial.print("Valor de PWM: ");
  Serial.println(pwmValue);
  
  // Establecer el valor del pin del LED a través de PWM
  analogWrite(ledPin, pwmValue);
  
  // Pausar durante un segundo
  delay(1000);
}