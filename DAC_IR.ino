/*
ir demo
*/

//GPIO Pins
const byte IR_IN = 36;
// const byte DAC_PIN0 = 25;
// const byte DAC_PIN1 = 26; 

//Variables
int adc_val = 0;
uint8_t count = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(IR_IN, INPUT);
  // pinMode(DAC_PIN0, OUTPUT);
  // pinMode(DAC_PIN1, OUTPUT);
  analogReadResolution(8);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  adc_val = analogRead(IR_IN);
  
  // Serial.printf("Infrared Read: %d\n", adc_val);
  // delay(500);

  if(adc_val != 255 && count < 99){
    count++;
    Serial.printf("count: %d\n", count);
    delay(500);
  } 
}
