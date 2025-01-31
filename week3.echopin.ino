#define ECHOPIN 7
//echo pulse
#define TRIGPIN 8
int led=12;
int a,b;  
void setup() {
  Serial.begin(9600);
  pinMode(ECHOPIN, INPUT);
  pinMode(TRIGPIN, OUTPUT);
  pinMode(led, OUTPUT);

}   

void loop() {
  digitalWrite(TRIGPIN, LOW);
  delayMicroseconds(2000);
  digitalWrite(TRIGPIN, HIGH);
  delayMicroseconds(1000);
  digitalWrite(TRIGPIN, LOW);
  float a=pulseIn(ECHOPIN, HIGH);
  digitalWrite(led, HIGH);
  b=a*0.0344/2;
  Serial.print(b);
  Serial.println("cm");
  delay(3000);

}
