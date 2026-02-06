// Joystick Analógico ESP32

// Pines para conexión
const int JOY_VRX = 34; // A1 (Vrx)
const int JOY_VRY = 35; // A2 (Vry)
const int JOY_SW = 32; // D0 (SW)

void setup() {
  Serial.begin(115200); // Inicializar la comunicación serie a 115200 baudios
  
  // Configurar entradas analógicas como pines analógicos
  pinMode(JOY_VRX, INPUT);
  pinMode(JOY_VRY, INPUT);
}

void loop() {
  // Leer valor del joystick en el pin Vrx
  int vrx = analogRead(JOY_VRX);
  
  // Leer valor del joystick en el pin Vry
  int vry = analogRead(JOY_VRY);
  
  // Imprimir valores en la consola para depuración
  Serial.print("Vrx: ");
  Serial.print(vrx);
  Serial.print(", Vry: ");
  Serial.println(vry);
  
  delay(100); // Retraso de 100ms para no sobrecargar el puerto serie
}