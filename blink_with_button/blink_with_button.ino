
const int buttonPin = 2;  //The button is connected to pin 2
const int ledPin = 13;  //led is connected to pin 13;
int buttonState; //variable which stores the state of the button
void setup() {
  pinMode(buttonPin, INPUT);   // button is initialized to send input signal
  pinMode(ledPin, OUTPUT);  // ledpin is initailized to send out output signal

}

void loop() {
  buttonState = digitalRead(buttonPin);  // store the signal sent in when button is pressed in this variable

  if(buttonState == HIGH){
    digitalWrite(ledPin, HIGH);    //LED blinks if the button is pressed
    }
    else{
      digitalWrite(ledPin, LOW);   // otherwise it remains offf
    }
  

}
