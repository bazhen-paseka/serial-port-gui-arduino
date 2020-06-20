void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

int val = 1;
void loop() {
 if (Serial.available() > 0) {
    char a = Serial.read();
    val++;
    if (a == 'b') {
      digitalWrite(13, LOW);
      Serial.print("    off");
    } else if (a == 'r') {
      digitalWrite(13, HIGH);
      Serial.print("On");
    } else if (a == 'p') {
      //int val = analogRead(0);
      Serial.print(val);
    } else {
      Serial.print("Error!");
    }
  }
}
