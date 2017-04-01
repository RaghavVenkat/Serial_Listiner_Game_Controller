// Raghav @ logicbricks.in
// http://www.logicbricks.in
// https://www.youtube.com/user/raghav16ify

const int trigPin = 6;
const int echoPin = 7;

void setup() {
  Serial.begin(9600);
}

void loop()
{
 
  long duration, inches, cm;
  
  pinMode(trigPin, OUTPUT);
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  pinMode(echoPin, INPUT);
  
  duration = pulseIn(echoPin, HIGH);
  inches = microsecondsToInches(duration);
 
  Serial.print(inches);
  Serial.println();
  
  delay(100);
}

long microsecondsToInches(long microseconds)
{
  return microseconds / 74 / 2;
}

