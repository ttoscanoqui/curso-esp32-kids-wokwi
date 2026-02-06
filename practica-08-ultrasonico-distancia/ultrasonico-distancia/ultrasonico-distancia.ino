// Importar la biblioteca ultrasonic.h para utilizar el sensor HC-SR04
#include <Ultrasonic.h>

// Declarar el objeto Ultrasonic con los pines TRIG y ECHO
Ultrasonic ultrasonico(5, 18);

void setup() {
  // Inicializar la comunicación serie a una velocidad de 115200 bps
  Serial.begin(115200);
  
  // Imprimir un mensaje en la consola para confirmar que el programa está ejecutándose
  Serial.println("Sensor Ultrasónico HC-SR04 con ESP32");
}

void loop() {
  // Leer la distancia mediana entre el TRIG y ECHO
  long distancia = ultrasonico.timing();
  
  // Imprimir en consola la distancia medida
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  // Retraso de 1 segundo para no sobrecargar el puerto serial
  delay(1000);
}