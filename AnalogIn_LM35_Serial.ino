
void setup() 
{
  Serial.begin(9600);      // open the serial port at 9600 bps: 
  Serial.println("Smart Logic Tech");
  Serial.println("Voltmeter Demonstration");       
}

void loop() 
{  

  float Sense1;
    int err;
  float temp;                       
  Sense1= analogRead(A5) * (5.0 / 1023.0);       //Read Analog Voltage
 
  Serial.print("Volatage =");
  Serial.println(Sense1);  

  
    
  temp = (5.00 * analogRead(A4) * 100) / 1024.0; //Read Temperature Sensor
  Serial.print("Current Temperatur is "); 
  Serial.print(temp);
  Serial.println();
  delay (2000);
  
}
