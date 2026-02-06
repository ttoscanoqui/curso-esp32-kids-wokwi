c++
// Práctica 10: Conectando a WiFi - ESP32 en Internet

// Importar bibliotecas necesarias
#include <WiFi.h>

// Constantes para pines y configuración
const int ledPin = 2; // Pin del LED que conectaremos con el ESP32
const char* ssid = "Nombre de tu red Wi-Fi"; // Nombre de tu red WiFi
const char* password = "Clave de tu red Wi-Fi"; // Clave de tu red WiFi

// IP Address y puerto (opcional)
IPAddress local_ip(192, 168, 1, 100); // Dirección IP del ESP32 en la red
int port = 80; // Puerto para el acceso a la consola serial

void setup() {
  Serial.begin(115200); // Inicializar la comunicación serie con velocidad de 115200 bps
  
  // Configurar el pin del LED como salida
  pinMode(ledPin, OUTPUT);
  
  // Conectar al WiFi
  Serial.println("Conectando a " + String(ssid));
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Intentando conectar...");
  }
  
  Serial.println("¡Conectado!");
  Serial.print("Dirección IP: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // Enviar una solicitud GET a un servidor web (opcional)
  if (WiFi.status() == WL_CONNECTED) {
    String url = "http://www.example.com";
    WiFiClient client;
    HTTPClient http;
    
    http.begin(client, url);
    int httpCode = http.GET();
    
    if(httpCode > 0) {
      Serial.println("¡La respuesta del servidor es: ");
      Serial.println(http.getString());
    }
    else {
      Serial.println("Error en la solicitud GET");
    }
    http.end();
  } 
  // Si no está conectado, intenta reconectar
  else {
    Serial.println("Perdida de conexión. Intentando reconectar...");
    WiFi.begin(ssid, password);
  }
  
  // Encender el LED para indicar que estamos conectados a la red
  digitalWrite(ledPin, HIGH);
  
  delay(1000); // Retraso de 1 segundo
  
  // Apagar el LED
  digitalWrite(ledPin, LOW);
}