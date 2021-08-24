<<<<<<< HEAD
#define PWM D1
void setup() {
  // put your setup code here, to run once:
  pinMode(PWM, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i <= 255; i += 10){
      analogWrite(PWM, i);
      delay(1000);
    }
}
=======
#define PWM D1
void setup() {
  // put your setup code here, to run once:
  pinMode(PWM, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i <= 255; i += 10){
      analogWrite(PWM, i);
      delay(1000);
    }
}
>>>>>>> 15261e48b4eec3feb34a792afb256e23ac602d58
