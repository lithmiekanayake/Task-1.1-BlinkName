#define BUTTON_PIN 2
#define LED_PIN 3

// Morse Code Definitions
#define DOT_DURATION 250
#define DASH_DURATION (3 * DOT_DURATION)
#define LETTER_SPACE_DURATION (3 * DOT_DURATION)
#define WORD_SPACE_DURATION (7 * DOT_DURATION)

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
// Check if button is pressed
    // Start the Morse Code for "LITHMI"
    morseDot(); morseDash(); morseDot(); morseDot(); // L
    morseDot(); morseDot(); morseDash(); // I
    morseDot(); morseDot(); morseDot(); morseDot(); // T
    morseDash(); // H
    morseDot(); morseDash(); morseDash(); // M
    morseDot(); morseDot(); morseDot(); // I
    delay(1000); // Pause between repetitions
  
}

// Function to blink a dot (short signal)
void morseDot() {
  digitalWrite(LED_PIN, HIGH);
  delay(DOT_DURATION);
  digitalWrite(LED_PIN, LOW);
  delay(DOT_DURATION);
}

// Function to blink a dash (long signal)
void morseDash() {
  digitalWrite(LED_PIN, HIGH);
  delay(DASH_DURATION);
  digitalWrite(LED_PIN, LOW);
  delay(DOT_DURATION);
}