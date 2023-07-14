//Here is where we declare and initialize constants, variables and even import libraries

const int ledPin = 13;  //The leg of the LED is connected to pin 13 of the arduino




void setup() {
  // In the setup() function, the pinMode() function is called to set the ledPin to OUTPUT.
  //This configures the pin to be able to send electrical signals to the LED.
  pinMode(ledPin, OUTPUT);  //

}

void loop() {
  // This is the endless loop which runs our arduino program:
   // This repeatedly turns the LED on and off with a delay of 2 seconds between each state change. 
  //This causes the LED to blink on and off every 2 seconds.
  digitalWrite(ledPin,HIGH); //On
  delay(2000); //2 seconds
  digitalWrite(ledPin, LOW); //Off
  delay(2000);
  

}
