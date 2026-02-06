// Configuración de pines
const int PIN_ROJO = 12; // LED rojo conectado a pin D12
const int PIN_AMARILLO = 13; // LED amarillo conectado a pin D13
const int PIN_VERDE = 14; // LED verde conectado a pin D14

// Configuración de estados del semáforo
const int ESTADO_PARADO = 0;
const int ESTADO_AMARILLO = 1;
const int ESTADO_ROJO = 2;

int estadoActual = ESTADO_PARADO;
unsigned long tiempoUltimoCambio = 0; // Tiempo en que se cambió el estado

void setup() {
  Serial.begin(115200); // Inicializar puerto serial a 115200 baudios
  pinMode(PIN_ROJO, OUTPUT); // Configurar pin del LED rojo como salida
  pinMode(PIN_AMARILLO, OUTPUT); // Configurar pin del LED amarillo como salida
  pinMode(PIN_VERDE, OUTPUT); // Configurar pin del LED verde como salida

  Serial.println("Semáforo inteligente inicializado");
}

void loop() {
  // Actualizar tiempo de cambio de estado
  unsigned long currentTime = millis();
  if (currentTime - tiempoUltimoCambio > 2000) { // Cambiar estado cada 2 segundos
    tiempoUltimoCambio = currentTime;

    // Cambiar estado del semáforo
    switch (estadoActual) {
      case ESTADO_PARADO:
        estadoActual = ESTADO_AMARILLO;
        Serial.println("Estado: AMARILLO");
        break;
      case ESTADO_AMARILLO:
        estadoActual = ESTADO_ROJO;
        Serial.println("Estado: ROJO");
        break;
      case ESTADO_ROJO:
        estadoActual = ESTADO_PARADO;
        Serial.println("Estado: PARADO");
        break;
    }
  }

  // Encender LED según el estado del semáforo
  switch (estadoActual) {
    case ESTADO_AMARILLO:
      digitalWrite(PIN_VERDE, LOW); // Apagar LED verde
      digitalWrite(PIN_ROJO, LOW); // Apagar LED rojo
      digitalWrite(PIN_AMARILLO, HIGH); // Encender LED amarillo
      break;
    case ESTADO_ROJO:
      digitalWrite(PIN_VERDE, LOW); // Apagar LED verde
      digitalWrite(PIN_AMARILLO, LOW); // Apagar LED amarillo
      digitalWrite(PIN_ROJO, HIGH); // Encender LED rojo
      break;
    case ESTADO_PARADO:
      digitalWrite(PIN_VERDE, HIGH); // Encender LED verde
      digitalWrite(PIN_AMARILLO, LOW); // Apagar LED amarillo
      digitalWrite(PIN_ROJO, LOW); // Apagar LED rojo
      break;
  }

  delay(100); // Retraso para evitar sobrecarga del puerto serial
}