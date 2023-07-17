const int ledPin = 13;
const int sensorPin = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int rate = AnalogRead(sensorPin);
  Serial.println(rate);
  rate = map(rate,200,800,minDuration,maxDuration);
  digitalWrite(ledPin, HIGH);
  delay(rate); // the rate at which
  digitalWrite(ledPin, LOW);
  delay(rate);

}
