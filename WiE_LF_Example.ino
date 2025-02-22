int leftEnPin = 8;
int leftPWMP = 6; //2A
int leftPWMN = 5; //1A

int rightEnPin = 7;
int rightPWMP = 10; //3A
int rightPWMN = 11; //4A

void setup() {
  pinMode(leftEnPin, OUTPUT);
  pinMode(leftPWMP, OUTPUT);
  pinMode(leftPWMN, OUTPUT);

  pinMode(rightEnPin, OUTPUT);
  pinMode(rightPWMP, OUTPUT);
  pinMode(rightPWMN, OUTPUT);

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
void loop() {
  
driveForward(255);
delay(2000); 
driveBackward(255);
delay(2000);

}
