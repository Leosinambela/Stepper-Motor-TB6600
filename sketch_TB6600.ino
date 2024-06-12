#define directionPin 22
#define stepPin 23

#define stepsPerRevolution 6400
void setup() {
  // put your setup code here, to run once:
pinMode(directionPin, OUTPUT);
pinMode(stepPin, OUTPUT);
} 

void loop() {
  // put your main code here, to run repeatedly:
for (int i = 0; i < stepsPerRevolution; i++)  {
    digitalWrite(directionPin, HIGH);
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(10);
}
}
