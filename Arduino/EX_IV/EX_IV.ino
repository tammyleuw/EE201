// Pin definitions
const int segmentPins[] = {2, 3, 4, 5, 6, 7, 8};

void setup() {
  // put your setup code here, to run once:
   for (int i = 0; i < 7; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }
}

}

void loop() {
  // put your main code here, to run repeatedly:
 for (int number = 9; number >= 0; number--) {
    displayNumber(number);
    delay(1500); // 1.5 seconds delay
  }
}

void displayNumber(int num) {
  // Define the common anode pattern for each digit (0-9)
  const byte digitPatterns[] = {
    B11111100, // 0
    B01100000, // 1
    B11011010, // 2
    B11110010, // 3
    B01100110, // 4
    B10110110, // 5
    B10111110, // 6
    B11100000, // 7
    B11111110, // 8
    B11110110  // 9
  };

  // Display the corresponding pattern for the given number
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], bitRead(digitPatterns[num], i));
  }
}