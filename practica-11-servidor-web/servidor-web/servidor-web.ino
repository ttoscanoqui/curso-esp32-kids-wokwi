// Práctica 11: Servidor Web - Control desde el Navegador

// Importamos las bibliotecas necesarias
#include <WiFi.h>
#include <WebServer.h>

// Definimos las constantes de pines
const int ledRojo = 2;     // Pin del LED rojo
const int ledAmarillo = 3; // Pin del LED amarillo

// Creación del servidor web
WebServer server(80); // Servidor web en el puerto 80 (puerto HTTP estándar)

void setup() {
  Serial.begin(115200);
  
  // Inicializamos los pines como entradas/salidas
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);

  // Establecemos el LED rojo en estado apagado al inicio
  digitalWrite(ledRojo, LOW);

  // Conectamos a la red Wi-Fi
  WiFi.begin("TU_RUED_NAME", "TU_CONTRASEÑA");
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Conectando a la red...");
  }

  // Mostramos el mensaje de conexión exitosa en la consola serial
  Serial.println("Conexión establecida con éxito!");
  Serial.print("Dirección IP: ");
  Serial.println(WiFi.localIP());

  // Configuramos el servidor web
  server.on("/", handleRoot);
  server.on("/rojo", handleRojo);
  server.on("/amarillo", handleAmarillo);

  // Iniciamos el servidor web
  server.begin();
}

void loop() {
  // Procesamos las solicitudes del servidor web en segundo plano
  server.handleClient();

  // Mantenemos la ejecución de la tarea principal para evitar que se bloquee el sistema
  delay(1);
}

// Función para manejar la página raíz
void handleRoot() {
  String mensaje = "<h1>Página de control</h1><br><a href=\"/rojo\">Encender LED Rojo</a><br><a href=\"/amarillo\">Encender LED Amarillo</a>";
  
  server.send(200, "text/html", mensaje);
}

// Función para manejar la petición de encendido del LED rojo
void handleRojo() {
  // Encendemos el LED rojo
  digitalWrite(ledRojo, HIGH);

  String mensaje = "<h1>LED Rojo Encendido</h1>";
  
  server.send(200, "text/html", mensaje);
}

// Función para manejar la petición de encendido del LED amarillo
void handleAmarillo() {
  // Encendemos el LED amarillo
  digitalWrite(ledAmarillo, HIGH);

  String mensaje = "<h1>LED Amarillo Encendido</h1>";
  
  server.send(200, "text/html", mensaje);
}