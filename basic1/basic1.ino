int a=10;

void setup() {
  int a=10;
  Serial.begin(9600);
  a = test(10);
  Serial.println(a);

}
int test(int x)
{
  int rtn=3;
  return rtn *x;
}
void loop() {
 int a=10;  
a=test(10);
Serial.println(a);

a= test(20);
Serial.println(a);


a=test(30);
Serial.println(a);


a=test(40);
Serial.println(a);
delay(1000);
}
