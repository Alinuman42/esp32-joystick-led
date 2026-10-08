const int LED_Pin = 23; // Pin Code
const int Button_Pin = 18; // Button Code 

void setup() { //start
  pinMode(LED_Pin, OUTPUT); // input
  pinMode(Button_Pin, INPUT_PULLUP); //input

  Serial.begin(115200);
}

void loop() { // update
  int buttonState = digitalRead(Button_Pin);

  if (buttonState == LOW) {
    digitalWrite(LED_Pin, HIGH); //high is like a true 
    Serial.println("Joystick pressed");
  } 
  else {
    digitalWrite(LED_Pin, LOW); // false like a boollean 
    Serial.println("Joystick released");
  }

  delay(100);
}