/*======================================================
                INFRARED SENSOR COUNTER
========================================================
Description:
  This program takes an Infrared Sensor analog signal 
  and converts it to digital input. It then detects 
  every 500 miliseconds whether there is an obstacle 
  ahead and counts it until it reached 99 counts and 
  stops.

Programmer: 
  Felixander B. Doloso

Date: 
  14 October 2026
------------------------------------------------------*/

//GPIO Pins
const byte IR_IN = 36;

//Variables
int adc_val = 0;
uint8_t count = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(IR_IN, INPUT);
  analogReadResolution(8);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  adc_val = analogRead(IR_IN);

  if(adc_val != 255 && count < 99){
    count++;
    Serial.printf("count: %d\n", count);
    delay(500);
  } 
}
