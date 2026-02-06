c++
// Importar la biblioteca BluetoothSerial
#include <BluetoothSerial.h>

// Definir constantes para los pines
const int ledPin = 2;    // Pin del LED indicador de estado

// Crear un objeto BluetoothSerial llamado "bt"
BluetoothSerial bt;

void setup() {
  // Inicializar la comunicación serie a 115200 bps
  Serial.begin(115200);

  // Inicializar el pin del LED como salida
  pinMode(ledPin, OUTPUT);

  // Mostrar mensaje de inicio en la consola serial
  Serial.println("Iniciando chat inalámbrico por Bluetooth...");

  // Verificar si el módulo Bluetooth está disponible
  if (!bt.begin(0)) {
    Serial.println("Error: El módulo Bluetooth no está disponible.");
    while (1);
  }

  // Mostrar mensaje de éxito en la consola serial
  Serial.println("El módulo Bluetooth está disponible.");

  // Inicializar el emparejamiento del dispositivo
  bt.connectSerial();

  // Mostrar mensaje de inicio de la comunicación en la consola serial
  Serial.println("Comenzando la comunicación inalámbrica...");
}

void loop() {
  // Leer datos recibidos por Bluetooth
  String data = bt.readStringUntil('\n');

  // Si se recibieron datos, mostrarlos en la consola serial
  if (data != "") {
    Serial.print("Recibido: ");
    Serial.println(data);

    // Enviar un mensaje de respuesta por Bluetooth
    bt.write("Mensaje recibido!\r\n");
  }

  // Leer línea de comando del usuario
  String linea = Serial.readStringUntil('\n');

  // Si se ingresó una línea de comando, enviarla por Bluetooth
  if (linea != "") {
    bt.write(linea + "\r\n");

    // Mostrar mensaje de envío en la consola serial
    Serial.print("Enviado: ");
    Serial.println(linea);
  }
}