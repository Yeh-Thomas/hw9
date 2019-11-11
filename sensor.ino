void setup() {
  // put your setup code here, to run once:
  Serial.begin(19200);
  pinMode(A0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value;

  value = analogRead(A0);
  Serial.print("0 1024 ");
  Serial.println(value);


}
