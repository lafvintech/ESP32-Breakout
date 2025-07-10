/**********************************************************************
* Filename    : ESP32_blink.
* Description : Make a running light effect with multiple LEDs.
* Modification: 2025/05/12
**********************************************************************/

// ESP32
// the setup function runs once when you press reset or power the board.
int ledPins[] = {32,33,25,26,27,14,12,13,23,22,1,3,21,19,18,5,17,16,4,2,15};
int ledCount = 21 ; // The total number of leds used is 21.

// the setup function runs once when you press reset or power the board
void setup() {
  // Initialize all LED pins to output mode
  for (int i = 0; i < ledCount; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

// the loop function runs over and over again forever
void loop() {
  // Light up the leds in order
  for (int i = 0; i < ledCount; i++) {
    digitalWrite(ledPins[i], HIGH);   // Light the current LED
    delay(500);                       // Wait 500 ms
    digitalWrite(ledPins[i], LOW);    // Extinguishes the current LED

  }

  // Turn on the LED lights in reverse order
  for (int i = ledCount - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);   // Light the current LED
    delay(500);                       // Wait 500 ms
    digitalWrite(ledPins[i], LOW);    // Extinguishes the current LED

  }
}