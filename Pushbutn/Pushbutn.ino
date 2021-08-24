<<<<<<< HEAD
#define DIN D1

void setup() {
  // put your setup code here, to run once:
  pinMode (LED_BUILTIN, OUTPUT);
  pinMode (DIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int input = digitalRead(DIN);
  Serial.println(input);
  digitalWrite(LED_BUILTIN, !(input));
}
=======
#define DIN D1

void setup() {
  // put your setup code here, to run once:
  pinMode (LED_BUILTIN, OUTPUT);
  pinMode (DIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int input = digitalRead(DIN);
  Serial.println(input);
  digitalWrite(LED_BUILTIN, !(input));
}
>>>>>>> 15261e48b4eec3feb34a792afb256e23ac602d58
