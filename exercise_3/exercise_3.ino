int d0 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(0,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  d0 = digitalRead(0);
if(d0 == HIGH) {
  Serial.println("Hello World!");
} else {
  Serial.println("It's 2023");
}
}
