int IRPin =2;
int led = 13;
int value;
void setup() {
  // put your setup code here, to run once:
  pinMode(IRPin , INPUT);
  Serial.begin(9600);
  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  value = digitalRead(IRPin);
  Serial.println(!value);
  if(digitalRead(IRPin)==0){
    digitalWrite(led,HIGH);
    Serial.println("object detected");
  }
  else{
    digitalWrite(led,LOW);
    Serial.println("object not detected");
    value = 0;
  }


}
