
void setup() {

//Outputs
pinMode(4,OUTPUT);
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);
pinMode(7,OUTPUT);

// Buttons
pinMode(11,INPUT);
pinMode(12,INPUT);
}

void loop() { 
// The motor has a Step Angle = 90 degree

  if(digitalRead(11)==1){full();}
  else if (digitalRead(12)==1){half();}
  else {digitalWrite(4,0); digitalWrite(6,0); digitalWrite(5,0); digitalWrite(7,0);}

}
void full(){
// Full Step Motor
  digitalWrite(4,1); digitalWrite(6,0); digitalWrite(5,0); digitalWrite(7,0);
  delay(500);
  digitalWrite(4,0); digitalWrite(6,1); digitalWrite(5,0); digitalWrite(7,0);
  delay(500);
  digitalWrite(4,0); digitalWrite(6,0); digitalWrite(5,1); digitalWrite(7,0);
  delay(500);
  digitalWrite(4,0); digitalWrite(6,0); digitalWrite(5,0); digitalWrite(7,1);
  delay(500);
}

void half(){
// Half Step Motor
  digitalWrite(4,1); digitalWrite(6,0); digitalWrite(5,0); digitalWrite(7,0);
  delay(500);
  digitalWrite(4,1); digitalWrite(6,1); digitalWrite(5,0); digitalWrite(7,0);
  delay(500);
  digitalWrite(4,0); digitalWrite(6,1); digitalWrite(5,0); digitalWrite(7,0);
  delay(500);
  digitalWrite(4,0); digitalWrite(6,1); digitalWrite(5,1); digitalWrite(7,0);
  delay(500);
  digitalWrite(4,0); digitalWrite(6,0); digitalWrite(5,1); digitalWrite(7,0);
  delay(500);
  digitalWrite(4,0); digitalWrite(6,0); digitalWrite(5,1); digitalWrite(7,1);
  delay(500);
  digitalWrite(4,0); digitalWrite(6,0); digitalWrite(5,0); digitalWrite(7,1);
  delay(500);
  digitalWrite(4,1); digitalWrite(6,0); digitalWrite(5,0); digitalWrite(7,1);
  delay(500);
  digitalWrite(4,1); digitalWrite(6,0); digitalWrite(5,0); digitalWrite(7,0);
  delay(500);
}
