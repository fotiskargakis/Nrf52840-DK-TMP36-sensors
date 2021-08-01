#include <Arduino.h>
#include <SPI.h>
#define onboard 13
int tempPin1 = A0;
int tempPin2 = A1;
int tempPin3 = A2;
int tempPin4 = A4;
void setup()
{
analogReadResolution(12);
Serial.begin(115200);

}
void loop()
{
float tempReading1 = analogRead(tempPin1);  
float tempReading2 = analogRead(tempPin2); 
float tempReading3 = analogRead(tempPin3); 
float tempReading4 = analogRead(tempPin4); 
 
 
  // converting that reading to voltage, which is based off the reference voltage
  float voltage1 = tempReading1 * 3.0;
  voltage1 /= 4096.0; 
 
  //  temperature
  float temperatureC1 = (voltage1 - 0.5) * 100 ;  //converting from 10 mv per degree wit 500 mV offset
   //to degrees ((volatge - 500mV) times 100)
 
  // Fahrenheight
  float temperatureF1 = (temperatureC1 * 9.0 / 5.0) + 32.0;
     
  float voltage2= tempReading2 * 3.0 ;
  voltage2 /= 4096.0; 

 
  //  temperature
  float temperatureC2 = (voltage2 - 0.5) * 100 ;  
 
  // Fahrenheight
 
float temperatureF2 = (temperatureC2 * 9.0 / 5.0) + 32.0;
      
  float voltage3 = tempReading3 * 3.0;
  voltage3 /= 4096.0; 
 
  // temperature
  float temperatureC3 = (voltage3 - 0.5) * 100 ;  
  // Fahrenheight
  float temperatureF3 = (temperatureC3 * 9.0 / 5.0) + 32.0;

  float voltage4 = tempReading4 * 3.0;
  voltage4 /= 4096.0; 
  //  temperature
  float temperatureC4 = (voltage4 - 0.5) * 100 ;  
  
  //  Fahrenheight
  float temperatureF4 = (temperatureC4 * 9.0 / 5.0) + 32.0;
  
  
  Serial.print(" Sensor1: ");
  Serial.print(" Voltage= ");
  Serial.print(voltage1); Serial.print(" volts ");
  Serial.print(temperatureC1); Serial.print("°C ");
  Serial.print(temperatureF1); Serial.println("°F ");
   Serial.print(" Sensor2: ");
   Serial.print(" Voltage= ");
  Serial.print(voltage2); Serial.print(" volts ");
  Serial.print(temperatureC2); Serial.print("°C ");
  Serial.print(temperatureF2); Serial.println("°F ");
   Serial.print(" Sensor3: ");
   Serial.print(" Voltage= ");
  Serial.print(voltage3); Serial.print(" volts ");
  Serial.print(temperatureC3); Serial.print("°C ");
  Serial.print(temperatureF3); Serial.println("°F ");
   Serial.print(" Sensor4: ");
   Serial.print(" Voltage= ");
  Serial.print(voltage4); Serial.print(" volts ");
  Serial.print(temperatureC4); Serial.print("°C ");
  Serial.print(temperatureF4); Serial.println("°F ");

  delay(3000);
  

}

