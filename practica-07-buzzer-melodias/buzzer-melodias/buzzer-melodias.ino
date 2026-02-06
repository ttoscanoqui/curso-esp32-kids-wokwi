// Práctica 7: Buzzer Musical - Crea Melodías

// Constantes para los pines
const int buzzerPin = 2; // Pin del buzzer pasivo conectado a GPIO 2 (o cualquier otro pin)

void setup() {
  Serial.begin(115200); // Inicializar la comunicación serial a 115200 bps
  
  // Configurar el modo de salida del pin del buzzer
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Melodía "Twinkle, Twinkle, Little Star"
  tocarMelodia(
    NOTE_C4, notaDuracion(500),
    NOTE_D4, notaDuracion(500),
    NOTE_E4, notaDuracion(500),
    NOTE_G4, notaDuracion(750),
    NOTE_F4, notaDuracion(350),
    NOTE_E4, notaDuracion(375),
    NOTE_C4, notaDuracion(1250)
  );
  
  delay(1000); // Esperar un segundo entre melodías
  
  // Melodía "Mary Had a Little Lamb"
  tocarMelodia(
    NOTE_G3, notaDuracion(500),
    NOTE_A3, notaDuracion(250),
    NOTE_B3, notaDuracion(250),
    NOTE_G3, notaDuracion(250),
    NOTE_F3, notaDuracion(375),
    NOTE_E3, notaDuracion(1250)
  );
  
  delay(1000); // Esperar un segundo entre melodías
}

// Función para tocar una nota con una duración determinada en segundos
void tocarNota(int nota, int duracion) {
  // Convertir la nota a frecuencia (en Hz)
  int frequency = getFrequency(nota);
  
  // Tocar la nota durante la duración especificada
  tone(buzzerPin, frequency, duracion);
}

// Función para obtener la frecuencia de una nota en función de su número
int getFrequency(int nota) {
  switch (nota) {
    case NOTE_C4:
      return 261;
    case NOTE_D4:
      return 293;
    case NOTE_E4:
      return 329;
    case NOTE_G4:
      return 392;
    case NOTE_F4:
      return 349;
    case NOTE_A3:
      return 440;
    case NOTE_B3:
      return 493;
    case NOTE_G3:
      return 196;
    case NOTE_E3:
      return 164;
    default:
      return 0; // Nota desconocida
  }
}

// Función para obtener la duración de una nota en función del número de compás (4/8)
int notaDuracion(int compas) {
  switch (compas) {
    case 1: // Cuartos
      return 250;
    case 2: // Semicorcheles
      return 500;
    case 3: // Corcheles
      return 750;
    default:
      return 0; // Compás desconocido
  }
}

// Función para tocar una melodía con un número de notas determinado
void tocarMelodia(...) {
  // Tocar cada nota en la lista
  tocarNota(...);
  // ...
}