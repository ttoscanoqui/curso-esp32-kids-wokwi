// Importar la biblioteca DHT22
#include <DHT.h>

// Definir el pin que se utilizará para conectar el sensor DHT22
const int DHT_PIN = 4; // GPIO 4

// Instanciar un objeto DHT de tipo DHT22
DHT dht(DHT_PIN, DHT22);

void setup() {
  // Inicializar la comunicación serie a una velocidad de 115200 bps
  Serial.begin(115200);
  
  // Inicializar el sensor DHT22
  dht.begin();
}

void loop() {
  // Leer los datos del sensor DHT22 (temperatura y humedad)
  float temperatura = dht.readTemperature();
  float humedad = dht.readHumidity();
  
  // Imprimir los datos en la consola serial para debug
  Serial.println("Temperatura: " + String(temperatura) + "°C");
  Serial.println("Humedad: " + String(humedad) + "%");
  
  // Asegurarse de que los valores leídos sean válidos (no NaN ni infinito)
  if (!isnan(temperatura) && !isnan(humedad)) {
    // No hacer nada si los valores son válidos
  } else {
    // Imprimir un mensaje de error en la consola serial para debug
    Serial.println("Error al leer los datos del sensor DHT22");
  }
  
  // Esperar durante 2 segundos antes de leer nuevamente los datos
  delay(2000);
}