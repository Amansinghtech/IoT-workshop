#define LED D1

void setup() {
  pinMode(LED, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(LED, HIGH);
  delay(100);
  digitalWrite(LED, LOW);
  delay(100);
// put your main code here, to run repeatedly:

}
