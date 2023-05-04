
 int relayPin=10;
  int ledPin=13;
  int value=0;
void setup() {
   
  Serial.begin(9600);
 Serial.println("jkhk");
 pinMode(relayPin,OUTPUT);
 pinMode(ledPin,OUTPUT);
  delay(200);
}

void loop() {
 value=analogRead(A0);
 Serial.print("value");
 Serial.println(value);
 /*
 if(value>600)
 {

digitalWrite(relayPin,HIGH);
 digitalWrite(ledPin,HIGH);
 delay(1500); 
 }

 else
 {
digitalWrite(relayPin,LOW);
 digitalWrite(ledPin,LOW);
  
 }
*/
 delay(200);
}
