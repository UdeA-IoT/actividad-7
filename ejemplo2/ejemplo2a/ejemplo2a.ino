
/*
Referencias: 
1. https://randomnerdtutorials.com/esp8266-adc-reading-analog-values-with-nodemcu/
2. https://github.com/openhomeautomation/iot-esp8266
*/


const int analogInPin = A0; // The only analog pin on the Thing 
int sensorValue = 0;        // Value read from the pot

void setup() {
  // Start Serial  
  Serial.begin(115200);    
}

void loop() {
  // Read the analog in value
  sensorValue  = analogRead(analogInPin);
  
  // Display data  
  Serial.print("Sensor:  ");
  Serial.println(sensorValue);
   
  // Wait a few seconds between measurements.
  delay(2000);

}
