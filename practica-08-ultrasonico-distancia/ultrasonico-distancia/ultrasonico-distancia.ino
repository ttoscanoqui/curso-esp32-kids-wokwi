c++
// Constantes de pines
const int TRIG_PIN = 15; // Pin del sensor HC-SR04 para activar la señal
const int ECHO_PIN = 17; // Pin del sensor HC-SR04 para medir la distancia

void setup() {
  // Inicializar los pines como entradas y salidas
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  // Inicializar el puerto serie a 115200 bps para depuración
  Serial.begin(115200);
}

void loop() {
  // Desactivar la señal de trigger durante un tiempo breve (10 microsegundos)
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(10);

  // Activar la señal de trigger por un corto período de tiempo (10 microsegundos)
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);

  // Desactivar la señal de trigger
  digitalWrite(TRIG_PIN, LOW);

  // Medir el tiempo que tarda la señal en regresar
  long tiempoVuelo = pulseIn(ECHO_PIN, HIGH);

  // Convertir el tiempo a distancia en centímetros
  float distanciaCM = (tiempoVuelo / 2) * 0.0343; // Forma de onda del HC-SR04

  // Imprimir la distancia en el puerto serie para depuración
  Serial.println("Distancia: " + String(distanciaCM) + " cm");

  // Esperar un breve período antes de realizar otra medición
  delay(100);
}