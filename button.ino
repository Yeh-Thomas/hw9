int ledPin = 13;
int buttonPin = 4;  
 
 void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:

 if (digitalRead(buttonPin) == LOW) {
 digitalWrite(ledPin, HIGH);
 }
 else {
 digitalWrite(ledPin, LOW);
 }

}
