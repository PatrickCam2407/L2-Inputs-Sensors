void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);

  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  Serial.println(analogRead(A0));

  if (analogRead(A0) >= 166) {
    digitalWrite(10, HIGH);
  } else {
    digitalWrite(10, LOW);
  }
  delay(15); // Delay a little bit to improve simulation performance


  if (analogRead(A0) > 15) {
    digitalWrite(10, HIGH);
  } else {
    digitalWrite(10, LOW);
  }
  delay(15); // Delay a little bit to improve simulation performance


  if (analogRead(A0) >= 332) {
    digitalWrite(11, HIGH);
  } else {
    digitalWrite(11, LOW);
  }
  delay(15); // Delay a little bit to improve simulation performance


  if (analogRead(A0) >= 664) {
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(12, LOW);
  }
  delay(15); // Delay a little bit to improve simulation performance

}
