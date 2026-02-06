// Definir pines del ESP32
const int ledPin = 13; // Pin donde se conectará el LED
const int resistenciaPin = 22; // Pin donde se conectará la resistencia

void setup() {
  Serial.begin(115200); // Iniciar comunicación serie a 115200 bps
  
  // Configurar pin del LED como salida
  pinMode(ledPin, OUTPUT);
  
  // Configurar pin de la resistencia como entrada
  pinMode(resistenciaPin, INPUT);
}

void loop() {
  // Parpadeo lento
  parpadearLento();
  
  // Esperar un poco para cambiar a parpadeo rápido
  delay(2000);
  
  // Parpadeo rápido
  parpadearRapido();
}

// Función para hacer parpadear el LED con velocidad lenta
void parpadearLento() {
  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPin, HIGH); // Encender el LED
    delay(100); // Esperar un poco
    digitalWrite(ledPin, LOW); // Apagar el LED
    delay(100); // Esperar un poco
  }
}

// Función para hacer parpadear el LED con velocidad rápida
void parpadearRapido() {
  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPin, HIGH); // Encender el LED
    delay(50); // Esperar un poco
    digitalWrite(ledPin, LOW); // Apagar el LED
    delay(50); // Esperar un poco
  }
}

// Bucle principal para hacer parpadear el LED con diferente velocidad cada vez
void loop() {
  // Llamar a la función de parpadeo lento
  parpadearLento();
  
  // Imprimir mensaje en consola para debug
  Serial.println("Parpadeo lento");
  
  // Esperar un poco antes de cambiar a parpadeo rápido
  delay(2000);
  
  // Llamar a la función de parpadeo rápido
  parpadearRapido();
  
  // Imprimir mensaje en consola para debug
  Serial.println("Parpadeo rápido");
}