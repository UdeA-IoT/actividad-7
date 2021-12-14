
/*
Referencias: 
1. https://randomnerdtutorials.com/esp8266-adc-reading-analog-values-with-nodemcu/
2. https://github.com/openhomeautomation/iot-esp8266
*/


String values;

String serialData[2];
const int digitalLed = D5;     
const int analogLed = D4; // The only analog pin on the Thing 

void setup() {
  // Pin D4 is an output
  pinMode(digitalLed, OUTPUT);
  pinMode(analogLed, OUTPUT);
  // Start Serial  
  Serial.begin(9600);    
}

void loop() {
  // Read the analog in value   
  // Wait a few seconds between measurements.
  // send data only when you receive data:
  if (Serial.available() > 0) {
     // read the incoming byte:
     values = Serial.readString();
     // Serial.println(values);
     getSerialCommands(values);
     // Serial.println(serialData[0]);
     // Serial.println(serialData[1]);
     // Write digital led value
     if(serialData[0].equals("1")) {
       digitalWrite(digitalLed, HIGH);      
     }
     else {
       digitalWrite(digitalLed, LOW);    
     }
     // Write analog value
     analogWrite(analogLed, serialData[1].toInt()); 
  }
}

void getSerialCommands(String cmd){
  int semicolonIndex = cmd.indexOf(';');
  serialData[0]= cmd.substring(0,semicolonIndex);
  serialData[1]= cmd.substring(semicolonIndex + 1);    
}
