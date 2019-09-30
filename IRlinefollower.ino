
const int led[8] = {2,3,4,5,6,7,8,9};
void setup() {
  // put your setup code here, to run once:

for(int i = 0; i<8;i++)
  pinMode(led[i],INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sum=0,c=0;
  for(int i = 0;i<8; i++)
  {
    if(digitalRead(led[i]) == HIGH)
      {sum = sum + (i+1)*10;
        c++;
      }}
      if(c!=0)
        Serial.println(sum/c);
      else 
        Serial.println("0");
        delay(100);
  

}
