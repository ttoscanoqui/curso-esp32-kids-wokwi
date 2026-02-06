// Definir constantes para los pines del LED y resistencia
const int pinLED = 2; // Pin digital donde se conectará el LED
const int pinResistencia = 3; // Pin donde se conectará la resistencia

void setup() {
  Serial.begin(115200); // Inicializar puerto serie a 115200 baudios
  pinMode(pinLED, OUTPUT); // Configurar pin del LED como salida
  pinMode(pinResistencia, INPUT); // No es necesario configurar el pin de la resistencia como entrada
}

void loop() {
  digitalWrite(pinLED, HIGH); // Encender el LED
  delay(1000); // Esperar durante 1 segundo
  Serial.println("¡Hola Mundo!"); // Imprimir mensaje en consola
  
  digitalWrite(pinLED, LOW); // Apagar el LED
  delay(1000); // Esperar durante 1 segundo
}