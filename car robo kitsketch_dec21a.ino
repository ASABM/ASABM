int IRsens = 15;
int in1 = 5;
int in2 = 4;
int in3 = 12;
int in4= 14;

void setup() {
    pinMode(in1,OUTPUT);
    pinMode(in2,OUTPUT);
    pinMode(in3,OUTPUT);
    pinMode(in4,OUTPUT);
    pinMode(IRsens,INPUT);

}

void loop() {
  int IR = digitalRead(IRsens);
  delay(1000);
  if (IR == 0){
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);  // put your main code here, to run repeatedly:

  }
  else{
 
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
   
 }