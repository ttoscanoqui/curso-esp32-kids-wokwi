// Constantes para los pines del ESP32
const int pinBoton = 34; // Pin que conectamos al botón
const int pinLED = 27;   // Pin que conectamos al LED

void setup() {
  // Configuración de los pines como entradas/ salidas
  pinMode(pinBoton, INPUT_PULLUP); // Configuramos el pin del botón como entrada con pull-up
  pinMode(pinLED, OUTPUT);        // Configuramos el pin del LED como salida
  
  Serial.begin(115200); // Inicializamos la comunicación serial a 115200 baudios
}

void loop() {
  int estadoBoton = digitalRead(pinBoton); // Leemos el estado del botón

  if (estadoBoton == LOW) { // Si el botón está presionado (LOW)
    digitalWrite(pinLED, HIGH); // Encendemos el LED
    Serial.println("Botón presionado!"); // Imprimimos un mensaje en la consola
  } else {
    digitalWrite(pinLED, LOW); // Apagamos el LED si no se presiona el botón
  }
}