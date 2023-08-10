//Connect the Arduino to your computer using the USB cable. 
//Open the Serial Monitor in your IDE to see the values from the 
//sensor—this will also help you to calibrate your plant monitor. 
//The IDE will display the value of the sensor’s reading. My value 
//was 1000 with the sensor dry and not inserted in the soil, so I 
//know this is the highest, and driest, value. To calibrate this value, 
//turn the potentiometer on the controller clockwise to increase the 
//resistance and counterclockwise to decrease it (see Figure 5-5).
 //When the sensor is inserted into moist soil, the value will 
//drop to about 400. As the soil dries out, the sensor value rises; 
//when it reaches 900, the LED will light and the buzzer will sound.




const int moistureAO = 0;
 int AO = 0;       
// Pin connected to A0 on the controller
 int tmp = 0;      
// Value of the analog pin
 int buzzPin = 11; // Pin connected to the piezo buzzer
 int LED = 13;     
// Pin connected to the LED
 void setup () {
 Serial.begin(9600); // Send Arduino reading to IDE
 Serial.println("Soil moisture sensor");
 pinMode(moistureAO, INPUT);
 pinMode(buzzPin, OUTPUT); // Set pin as output
 pinMode(LED, OUTPUT);     
// Set pin as output
 }
 void loop () {
  tmp = analogRead( moistureAO );
 if ( tmp != AO ) {
    AO = tmp;
 Serial.print("A = "); // Show the resistance value of the sensor 
                          // in the IDE
 Serial.println(AO);
  }
 delay (1000);
 if (analogRead(0) > 900) { // If the reading is higher than 900,
 digitalWrite(buzzPin, HIGH); // the buzzer will sound
 digitalWrite(LED, HIGH);    
 // and the LED will light
 delay(1000); // Wait for 1 second
 digitalWrite(buzzPin, LOW);
 digitalWrite(LED, HIGH);
  }
 else {
 digitalWrite(buzzPin, LOW); // If the reading is below 900, 
                                // the buzzer and LED stay off
 digitalWrite(LED, LOW);
  }
 }
