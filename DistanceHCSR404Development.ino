// Example Codes for Arduino 
// Author David Sandoval Garcia
// Example Codes University

int trigPin1 = 2;
int echoPin1 = 3;

int trigPin2 = 4;
int echoPin2 = 5;

int trigPin3 = 6;
int echoPin3 = 7;

int trigPin4 = 8;
int echoPin4 = 9;



void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(trigPin1, OUTPUT);
 pinMode(echoPin1, INPUT);
 pinMode(trigPin2, OUTPUT);
 pinMode(echoPin2, INPUT);
  pinMode(trigPin3, OUTPUT);
 pinMode(echoPin3, INPUT);
  pinMode(trigPin4, OUTPUT);
 pinMode(echoPin4, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
long duration1, distance1;
digitalWrite(trigPin1, LOW); 
delayMicroseconds(2);
digitalWrite(trigPin1, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin1, LOW);
duration1 = pulseIn(echoPin1, HIGH);
distance1 = (duration1/2) / 29.1;

if (distance1 >= 500 || distance1 <= 0){
  Serial.println("Out of range");
}
else {
  Serial.print ("Sensor1 ");
  Serial.print ("distance1");
  Serial.println("cm");
}
delay(2000); 
long duration2, distance2;
digitalWrite(trigPin2, LOW); 
delayMicroseconds(2);
digitalWrite(trigPin2, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin2, LOW);
duration2 = pulseIn(echoPin2, HIGH);
distance2 = (duration2/2) / 29.1;

if (distance2 >= 500 || distance2 <= 0){
  Serial.println("Out of range");
}
else {
  Serial.print ("Sensor2 ");
  Serial.print ("distance2");
  Serial.println("cm");
}
delay(2000);
long duration3, distance3;
digitalWrite(trigPin3, LOW); 
delayMicroseconds(2);
digitalWrite(trigPin3, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin3, LOW);
duration3 = pulseIn(echoPin3, HIGH);
distance3 = (duration3/2) / 29.1;

if (distance3 >= 500 || distance3 <= 0){
  Serial.println("Out of range");
}
else {
  Serial.print ("Sensor3 ");
  Serial.print ("distance3");
  Serial.println("cm");
}
delay(2000);
long duration4, distance4;
digitalWrite(trigPin4, LOW); 
delayMicroseconds(2);
digitalWrite(trigPin4, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin4, LOW);
duration4 = pulseIn(echoPin4, HIGH);
distance4 = (duration4/2) / 29.1;

if (distance4 >= 500 || distance4 <= 0){
  Serial.println("Out of range");
}
else {
  Serial.print ("Sensor4 ");
  Serial.print ("distance4");
  Serial.println("cm");
}
delay(2000);
}
