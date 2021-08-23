#define LDR A0

void setup() {
  // put your setup code here, to run once:
  pinMode(LDR, INPUT);
  Serial.begin(9600);
}

void loop() {

  int light = analogRead(LDR);
  Serial.println(light);
  // put your main code here, to run repeatedly:

}
