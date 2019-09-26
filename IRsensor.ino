const int outputPin = 13;
const int inputPin =8;
int obs = HIGH;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(inputPin,INPUT);
pinMode(outputPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
obs = digitalRead(inputPin);
if(obs == HIGH)
  {
    Serial.println("OBSTACLE DETECTED");
    digitalWrite(outputPin,HIGH);
  }
  else
  {
    Serial.println("NO OBSTACLE DETECTED");
    digitalWrite(outputPin,LOW);
  }
  delay(100);
}
