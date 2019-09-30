const int trigPin = 8;
const int echoPin = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
   Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float dist;
  long time;
  const int speed = 330;
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  
   time = pulseIn(echoPin, HIGH);
  
  dist = (speed*time)/2000.0;
  delay(50);
  Serial.println(dist);
}
