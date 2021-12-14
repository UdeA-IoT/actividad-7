
/*
Referencias: 
1. https://randomnerdtutorials.com/esp8266-adc-reading-analog-values-with-nodemcu/
2. https://github.com/openhomeautomation/iot-esp8266
*/

const int ledBuildint = D4;     
const int analogInPin = A0; // The only analog pin on the Thing 
int sensorValue = 0;        // Value read from the pot

void setup() {
  // Pin GPIO2 is an output
  pinMode(ledBuildint, OUTPUT);
  // Start Serial  
  Serial.begin(9600);    
}

void loop() {
  // Read the analog in value
  sensorValue  = analogRead(analogInPin);
  
  // Display data    
  Serial.println(sensorValue);
   
  // Wait a few seconds between measurements.
  analogWrite(ledBuildint, sensorValue/4); // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
}
