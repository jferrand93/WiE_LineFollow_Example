int leftEnPin = 8;
int leftPWMP = 6; //2A
int leftPWMN = 5; //1A

//int rightEnPin = ;
//int rightPWMP = 6; //3A
//int rightPWMN = 5; //4A

int pwmSpeed = 255; //0 - 255

void setup() {
  pinMode(leftEnPin, OUTPUT);
  pinMode(leftPWMP, OUTPUT);
  pinMode(leftPWMN, OUTPUT);

  pinMode(rightEnPin, OUTPUT);
  pinMode(rightPWMP, OUTPUT);
  pinMode(rightPWMN, OUTPUT);

}
void driveForward(){
  digitalWrite(leftEnPin, HIGH);
  analogWrite(leftPWMP, pwmSpeed);
  analogWrite(leftPWMN, 0);

  digitalWrite(rightEnPin, HIGH);
  analogWrite(rightPWMP, pwmSpeed);
  analogWrite(rightPWMN, 0);
}

void driveBackward(){
  digitalWrite(leftEnPin, HIGH);
  analogWrite(leftPWMP, 0);
  analogWrite(leftPWMN, pwmSpeed);

  digitalWrite(rightEnPin, HIGH);
  analogWrite(rightPWMP, 0);
  analogWrite(rightPWMN, pwmSpeed);
}

void driveRight(){
  digitalWrite(leftEnPin, HIGH);
  analogWrite(leftPWMP, pwmSpeed);
  analogWrite(leftPWMN, 0);

  digitalWrite(rightEnPin, HIGH);
  analogWrite(rightPWMP, 0);
  analogWrite(rightPWMN, pwmSpeed);
}

void driveLeft(){
  digitalWrite(leftEnPin, HIGH);
  analogWrite(leftPWMP, 0);
  analogWrite(leftPWMN, pwmSpeed);

  digitalWrite(rightEnPin, HIGH);
  analogWrite(rightPWMP, pwmSpeed);
  analogWrite(rightPWMN, 0);
}
void loop() {
  


}
