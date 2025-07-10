/**********************************************************************
* Filename    : ESP32_S3 blink 
* Description : Make a running light effect with multiple LEDs.
* Modification: 2025/05/12
**********************************************************************/

//ESP32-S3
// the setup function runs once when you press reset or power the board.
int ledPins[] = {4,5,6,7,15,16,17,18,8,3,46,9,10,11,12,13,14,43,44,1,2,42,41,40,39,38,37,36,35,0,45,48,47,21,20,19};
int ledCount = 36 ; // The total number of leds used is 36

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
    delay(200);                       // Wait 500 ms
    digitalWrite(ledPins[i], LOW);    // Extinguishes the current LED

  }

  // Turn on the LED lights in reverse order
  for (int i = ledCount - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);   // Light the current LED
    delay(200);                       // Wait 500 ms
    digitalWrite(ledPins[i], LOW);    // Extinguishes the current LED

  }
}