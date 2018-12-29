//REjtan Changing rgb ccolor with button

const int buttonPin = 6; //button
const int redPin = 4; //red diode
const int greenPin = 2; // green diode
const int bluePin = 3; // blue diode
int counter = 0;

void setup() {
  pinMode(buttonPin,  INPUT_PULLUP);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT); //setting up the pin modes
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int buttonState;
  buttonState = digitalRead(buttonPin);
                                                  // here i'm making the button to add 1 to counter
  
  if (buttonState == LOW) {
    counter++;
    delay(150);
  }
  
  else if (counter == 0) {
    analogWrite(redPin, 255);
    analogWrite(greenPin, 50);     // diffrent colors just change the values to make other colors
    analogWrite(bluePin, 50);
  }
  
  else if (counter == 1) {
    analogWrite(redPin, 0);
    analogWrite(greenPin, 255);
    analogWrite(bluePin, 0);
  }
  
  else if (counter == 2) {
    analogWrite(redPin, 255);
    analogWrite(greenPin, 255); 
    analogWrite(bluePin, 0);
  }
  
  else if (counter == 3) {
    analogWrite(redPin,80);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 80);
  }
  
  else {
    counter = 0;             //here I'm setting the counter to zero if it is too big (to make a loop)
  }
}
