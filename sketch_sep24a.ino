const int ldr_value = A0;
 const int pin_num=13;
void setup() {
  // put your setup code here, to run once:
  
 
  
  Serial.begin(9600);
  pinMode(pin_num,OUTPUT);
  pinMode(ldr_value,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int a= analogRead(ldr_value);
  Serial.println(a);
  if(a<200)
  {
    digitalWrite(pin_num,HIGH);  }
  else
  {
    digitalWrite(pin_num,LOW);
  }
}
