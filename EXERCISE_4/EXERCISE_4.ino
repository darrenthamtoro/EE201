void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(6,OUTPUT);
pinMode(4,OUTPUT);
pinMode(3,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
//9
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(6, LOW);
digitalWrite(4, HIGH);
digitalWrite(3, LOW);

delay(1500);

//8
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(6, LOW);
digitalWrite(4, LOW);
digitalWrite(3, LOW);
delay(1500);

//7
digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(6, LOW);
digitalWrite(4, HIGH);
digitalWrite(3, HIGH);
delay(1500);

//6
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(6, LOW);
digitalWrite(4, LOW);
digitalWrite(3, LOW);
delay(1500);

//5
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(6, LOW);
digitalWrite(4, HIGH);
digitalWrite(3, LOW);
delay(1500);

//4
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(10, HIGH);
digitalWrite(9, LOW);
digitalWrite(6, LOW);
digitalWrite(4, HIGH);
digitalWrite(3, HIGH);
delay(1500);

//3
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(6, LOW);
digitalWrite(4, HIGH);
digitalWrite(3, LOW);
delay(1500);

//2
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(6, HIGH);
digitalWrite(4, LOW);
digitalWrite(3, LOW);
delay(1500);

//1
digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(10, HIGH);
digitalWrite(9, LOW);
digitalWrite(6, LOW);
digitalWrite(4, HIGH);
digitalWrite(3, HIGH);
delay(1500);

//0
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(6, LOW);
digitalWrite(4, LOW);
digitalWrite(3, LOW);
delay(1500);
}
