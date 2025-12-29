
int ldr = A0; 
int ledPin=11;
int ldrValue;
void setup() {
pinMode(ldr,INPUT);
pinMode(ledPin,OUTPUT);
Serial.begin(9600); 
}
void loop() {
ldrValue=analogRead(ldr); 
Serial.println(ldrValue);
ldrValue=map(ldrValue,0,1023,0,255);
analogWrite(ledPin,255-ldrValue);
delay(1000);
}