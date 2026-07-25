//------------- Motor 1 -------------
#define ENA1 5
#define IN1 2
#define IN2 3

//------------- Motor 2 -------------
#define ENB1 6
#define IN3 4
#define IN4 7

//------------- Motor 3 -------------
#define ENA2 11
#define IN5 12
#define IN6 13

//------------- Motor 4 -------------
#define ENB2 9
#define IN7 A0
#define IN8 A1

void setup() {

  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);

  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);

  pinMode(IN5,OUTPUT);
  pinMode(IN6,OUTPUT);

  pinMode(IN7,OUTPUT);
  pinMode(IN8,OUTPUT);

  pinMode(ENA1,OUTPUT);
  pinMode(ENB1,OUTPUT);
  pinMode(ENA2,OUTPUT);
  pinMode(ENB2,OUTPUT);

}

//=========================
void forward(){

  analogWrite(ENA1,255);
  analogWrite(ENB1,255);
  analogWrite(ENA2,255);
  analogWrite(ENB2,255);

  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);

  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);

  digitalWrite(IN5,HIGH);
  digitalWrite(IN6,LOW);

  digitalWrite(IN7,HIGH);
  digitalWrite(IN8,LOW);

}

//=========================
void backward(){

  analogWrite(ENA1,255);
  analogWrite(ENB1,255);
  analogWrite(ENA2,255);
  analogWrite(ENB2,255);

  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);

  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);

  digitalWrite(IN5,LOW);
  digitalWrite(IN6,HIGH);

  digitalWrite(IN7,LOW);
  digitalWrite(IN8,HIGH);

}

//=========================
void turnRight(){

  analogWrite(ENA1,255);
  analogWrite(ENB1,255);
  analogWrite(ENA2,255);
  analogWrite(ENB2,255);

  // المحركان الأيسران للأمام
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);

  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);

  // المحركان الأيمنان للخلف
  digitalWrite(IN5,LOW);
  digitalWrite(IN6,HIGH);

  digitalWrite(IN7,LOW);
  digitalWrite(IN8,HIGH);

}

//=========================
void turnLeft(){

  analogWrite(ENA1,255);
  analogWrite(ENB1,255);
  analogWrite(ENA2,255);
  analogWrite(ENB2,255);

  // المحركان الأيسران للخلف
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);

  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);

  // المحركان الأيمنان للأمام
  digitalWrite(IN5,HIGH);
  digitalWrite(IN6,LOW);

  digitalWrite(IN7,HIGH);
  digitalWrite(IN8,LOW);

}

//=========================
void stopMotors(){

  analogWrite(ENA1,0);
  analogWrite(ENB1,0);
  analogWrite(ENA2,0);
  analogWrite(ENB2,0);

}

//=========================
void loop() {

  // للأمام 30 ثانية
  forward();
  delay(30000);

  // للخلف 60 ثانية
  backward();
  delay(60000);

  // يمين ويسار لمدة دقيقة
  unsigned long start = millis();

  while(millis()-start < 60000){

    turnRight();
    delay(3000);

    turnLeft();
    delay(3000);

  }

  stopMotors();

  while(true);

}