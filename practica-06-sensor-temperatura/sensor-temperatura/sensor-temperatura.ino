c++
// Importar la librería para el sensor DHT11/DHT22
#include "DHT.h"

// Definir constantes para los pines
const int pinSensor = 14; // Pin donde se conecta el sensor DHT11/DHT22

// Definir constante para el tipo de sensor (1 para DHT11, 2 para DHT22)
const int sensorTipo = 1;

void setup() {
  // Inicializar la comunicación serie a una velocidad de 115200 bps
  Serial.begin(115200);

  // Configurar el pin como entrada
  pinMode(pinSensor, INPUT);

  // Inicializar el sensor DHT11/DHT22
  DHT dht(pinSensor, sensorTipo);
}

void loop() {
  // Leer la temperatura y humedad del aire
  float temperatura = dht.readTemperature();
  float humedad = dht.readHumidity();

  // Verificar si se ha producido un error al leer los datos
  if (isnan(temperatura) || isnan(humedad)) {
    Serial.println("Error al leer los datos");
  } else {
    // Mostrar la temperatura y humedad en la consola de serie
    Serial.print("Temperatura: ");
    Serial.print(temperatura);
    Serial.print("°C ");
    Serial.print("Humedad: ");
    Serial.print(humedad);
    Serial.println("%");
  }

  // Esperar un tiempo antes de volver a leer los datos
  delay(1000);
}