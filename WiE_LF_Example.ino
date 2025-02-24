int leftEnPin = 8;
int leftPWMP = 6; //2A
int leftPWMN = 5; //1A

int rightEnPin = 7;
int rightPWMP = 10; //3A
int rightPWMN = 11; //4A

int irSensor = A0; 

int sensorVal;

int triggerPin = 3;
int echoPin = 4;

float objectDistance;

void setup() {
  pinMode(leftEnPin, OUTPUT);
  pinMode(leftPWMP, OUTPUT);
  pinMode(leftPWMN, OUTPUT);

  pinMode(rightEnPin, OUTPUT);
  pinMode(rightPWMP, OUTPUT);
  pinMode(rightPWMN, OUTPUT);

  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);

  Serial.begin(9600);

}
void loop() {
  objectDistance = distanceSensor();
  
  if(objectDistance > 10) driveForward(255);
  if(objectDistance < 10) driveBackward(255);
  
  delay(100); 
}

void driveForward(int speedValue){
  digitalWrite(leftEnPin, HIGH);
  analogWrite(leftPWMP, speedValue);
  analogWrite(leftPWMN, 0);

  digitalWrite(rightEnPin, HIGH);
  analogWrite(rightPWMP, speedValue);
  analogWrite(rightPWMN, 0);
}

void driveBackward(int speedValue){
  digitalWrite(leftEnPin, HIGH);
  analogWrite(leftPWMP, 0);
  analogWrite(leftPWMN, speedValue);

  digitalWrite(rightEnPin, HIGH);
  analogWrite(rightPWMP, 0);
  analogWrite(rightPWMN, speedValue);
}

void driveRight(int speedValue){
  digitalWrite(leftEnPin, HIGH);
  analogWrite(leftPWMP, speedValue);
  analogWrite(leftPWMN, 0);

  digitalWrite(rightEnPin, HIGH);
  analogWrite(rightPWMP, 0);
  analogWrite(rightPWMN, speedValue);
}

void driveLeft(int speedValue){
  digitalWrite(leftEnPin, HIGH);
  analogWrite(leftPWMP, 0);
  analogWrite(leftPWMN, speedValue);

  digitalWrite(rightEnPin, HIGH);
  analogWrite(rightPWMP, speedValue);
  analogWrite(rightPWMN, 0);
}

int distanceSensor(){
  float duration, distance;

  digitalWrite(triggerPin, LOW);  
	delayMicroseconds(2);  
	digitalWrite(triggerPin, HIGH);  
	delayMicroseconds(10);  
	digitalWrite(triggerPin, LOW); 

  duration = pulseIn(echoPin, HIGH);
  distance = (duration*.0343)/2;
  Serial.print(distance);
  Serial.println();
  return distance;
}

