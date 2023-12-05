void setup() {
  // put your setup code here, to run once:
  pinMode(7, INPUT); // Set the sliderPin as an input
  Serial.begin(9600);       // Initialize the serial communication
}

void loop() {
  // put your main code here, to run repeatedly:

  int switchState = digitalRead(7); // Read the state of the slider switch

  if (switchState == HIGH) {
    Serial.println("Hello World!"); // Print "Hello World!" if the switch is in the HIGH state
  } else {
    Serial.println("It's 2023"); // Print "It's 2023" if the switch is in the LOW state
  }

  delay(1000); // Delay for 1 second (adjust as needed)
}
