const int i1=6,i2=7,i3=4,i4=5;
const int o1=8;
//const int o2;

void setup() {
  // put your setup code here, to run once:
pinMode(i1,OUTPUT);
pinMode(i2,OUTPUT);
pinMode(i3,OUTPUT);
pinMode(i4,OUTPUT);
pinMode(o1,OUTPUT);
//pinMode(o2,OUTPUT);
digitalWrite(o1,HIGH);
//digitalWrite(o2,HIGH);
Serial.begin(9600);
}



void clockwise()
{
  digitalWrite(i1,HIGH);
  digitalWrite(i2,LOW);
  digitalWrite(i3,LOW);
  digitalWrite(i4,HIGH);
delay(100);
return;
}

void anticlock()
{
  digitalWrite(i1,LOW);
  digitalWrite(i2,HIGH);
  digitalWrite(i3,HIGH);
  digitalWrite(i4,LOW);
return;
}
void brake()
{
  digitalWrite(i1,LOW);
  digitalWrite(i2,LOW);
  digitalWrite(i3,HIGH);
  digitalWrite(i4,HIGH);
}
void freerun()
{
  digitalWrite(i1,LOW);
  digitalWrite(i2,LOW);
  digitalWrite(i3,LOW);
  digitalWrite(i4,LOW);
return;
}

void loop() {
  // put your main code here, to run repeatedly:
char c;
while(Serial.available())
{
c=(char)Serial.read();



if(c=='C' || c =='c')
  { 
    clockwise();
    delay(100);
    break;
    }
 else if(c=='a' || c=='A')
 {
  anticlock();
  }
 else if(c == 's' || c=='S')
  {
    brake();
    }
  else if(c =='r' || c == 'R')
    {
      freerun();
      }
    else
    {
      Serial.println("Wrong char");
      }

}
}
