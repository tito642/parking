// by tito elattar
const int trigPin = 7;
const int echoPin = 8;
const int buzzer = 4;
long duration;
int distance;
int safetyDistance;
void setup() {
  // put your setup code here, to run once:
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);


duration = pulseIn(echoPin, HIGH);

// Calculating the distance
distance= duration*0.034/2;

safetyDistance = distance;
if (safetyDistance < 100)
        { // Enter the Distance
digitalWrite(buzzer, HIGH);
}
else{
digitalWrite(buzzer, LOW);
}}
