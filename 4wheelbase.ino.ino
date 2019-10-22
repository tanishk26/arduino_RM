int PWM1,DIR1,PWM2,DIR2,PWM3,DIR3,PWM4,DIR4;
char ch;


void setup() 
{
 pinMode(PWM1,OUTPUT);
 pinMode(PWM2,OUTPUT);
 pinMode(PWM3,OUTPUT);
 pinMode(PWM4,OUTPUT);
 pinMode(DIR1,OUTPUT);
 pinMode(DIR2,OUTPUT);
 pinMode(DIR3,OUTPUT);
 pinMode(DIR4,OUTPUT);
 Serial.begin(9600);


}

void loop() 
{
 if(Serial.available())
 {
  ch=(char)Serial.read();
 }
if(ch=='f')
{
  digitalWrite(DIR1,HIGH);//forward
  digitalWrite(DIR2,HIGH);
  digitalWrite(DIR3,HIGH);
  digitalWrite(DIR4,HIGH);
  digitalWrite(PWM1,HIGH);
  digitalWrite(PWM2,HIGH);
  digitalWrite(PWM3,HIGH);
  digitalWrite(PWM4,HIGH);
 
}
if(ch=='s')
{
  digitalWrite(DIR1,LOW);
  digitalWrite(DIR2,LOW);
  digitalWrite(DIR3,LOW);//stop
  digitalWrite(DIR4,LOW);
  digitalWrite(PWM1,LOW);
  digitalWrite(PWM2,LOW);
  digitalWrite(PWM3,LOW);
  digitalWrite(PWM4,LOW);
 
}
if(ch=='b')
{
  digitalWrite(DIR1,LOW);
  digitalWrite(DIR2,LOW);
  digitalWrite(DIR3,LOW);//backward
  digitalWrite(DIR4,LOW);
  digitalWrite(PWM1,HIGH);
  digitalWrite(PWM2,HIGH);
  digitalWrite(PWM3,HIGH);
  digitalWrite(PWM4,HIGH);
 
}
if(ch=='l')
{ digitalWrite(DIR1,LOW);
  digitalWrite(DIR2,LOW);
  digitalWrite(DIR3,HIGH);
  digitalWrite(DIR4,HIGH);
  digitalWrite(PWM1,HIGH);//rotate left
  digitalWrite(PWM2,HIGH);
  digitalWrite(PWM3,HIGH);
  digitalWrite(PWM4,HIGH);
}
if(ch=='r')
{ digitalWrite(DIR1,HIGH);
  digitalWrite(DIR2,HIGH);
  digitalWrite(DIR3,LOW);
  digitalWrite(DIR4,LOW);// rotate right
  digitalWrite(PWM1,HIGH);
  digitalWrite(PWM2,HIGH);
  digitalWrite(PWM3,HIGH);
  digitalWrite(PWM4,HIGH);
}
if(ch=='1')
{
  digitalWrite(DIR1,HIGH);
  digitalWrite(DIR2,HIGH);
  digitalWrite(DIR3,HIGH);//turn left
  digitalWrite(DIR4,HIGH);
  analogWrite(PWM1,125);
  analogWrite(PWM2,125);
  analogWrite(PWM3,255);
  analogWrite(PWM4,255);
}

if(ch=='2')
{
  digitalWrite(DIR1,HIGH);
  digitalWrite(DIR2,HIGH);
  digitalWrite(DIR3,HIGH);//turn right
  digitalWrite(DIR4,HIGH);
  analogWrite(PWM1,255);
  analogWrite(PWM2,255);
  analogWrite(PWM3,125);
  analogWrite(PWM4,125);
}


}
