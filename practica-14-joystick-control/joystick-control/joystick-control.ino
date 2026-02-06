c++
// Constantes para los pines del joystick
const int pinX = 34; // A0 (salida analógica)
const int pinY = 35; // A1 (salida analógica)

void setup() {
  Serial.begin(115200); // Inicializar la comunicación serie a 115200 baudios
  pinMode(pinX, INPUT); // Configurar el pin X como entrada
  pinMode(pinY, INPUT); // Configurar el pin Y como entrada
}

void loop() {
  int valorX = analogRead(pinX); // Leer el valor del pin X en formato analógico (0-4095)
  int valorY = analogRead(pinY); // Leer el valor del pin Y en formato analógico (0-4095)

  // Mapear los valores de 0-4095 a un rango de -100 a 100
  int mapeadoX = map(valorX, 0, 4095, -100, 100);
  int mapeadoY = map(valorY, 0, 4095, -100, 100);

  // Imprimir los valores en la consola para depuración
  Serial.print("Valor X: ");
  Serial.print(mapeadoX);
  Serial.print(", Valor Y: ");
  Serial.println(mapeadoY);

  delay(50); // Retraso de 50ms entre lecturas
}