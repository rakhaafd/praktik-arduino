const int pin[] = {1,2,3,4,5,6};
void setup() {
 // put your setup code here, to run once:
 for (int i = 0; i < 6; i++) {
 pinMode(pin[i],OUTPUT);
 }
}
void loop() {
 // put your main code here, to run repeatedly:
 for (int i = 0; i < 6; i++) {
 digitalWrite(pin[i],HIGH);
 delay(255);
 digitalWrite(pin[i],LOW);
 delay(255);
 }
 for (int i = 5; i > -1; i--) {
 digitalWrite(pin[i],HIGH);
 delay(255);
 digitalWrite(pin[i],LOW);
 delay(255);
 }
}