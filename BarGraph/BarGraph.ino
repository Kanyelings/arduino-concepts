const int analogPin = A0;
const int ledCount = 9;

int ledPins[] = [2,3,4,5,6,7,8,9,10];

void setup() {
  // put your setup code here, to run once:
  for(int led = 0; led < ledCount; led++){
    pinMode(ledPins[led], HIGH);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

  int sensorReading = analogRead(analogPin);
  int ledLevel = map(sensorReading, 0, 1023, 0, ledCount);

  for(int led = 0; led < ledCount; led++){
    if(led<ledLevel){
      digitalWrite(LedPin[led], HIGH);
    }
    else{
      digitalWrite(LedPin[led], LOW);
    }
  }


  

}
