
int a =0;

void setup() {
  int a =1000;
  Serial.begin(9600);
  a = test(10);
  Serial.println(a);
}

int test(int x)
{
  int rtn =10;
  
  return rtn*x;
}

void loop() {

  if(false)//true
  {
    Serial.println("-----------------if------------");
  }
  else
  {
    Serial.println("else");
    
  }
  

  a = test(10);
  Serial.println(a);
  
  
  a = test(20);
  Serial.println(a);
  
  a = test(30);
  Serial.println(a);
  
  a = test(40);
  Serial.println(a);
  delay(1000);
}
