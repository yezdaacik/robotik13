// C++ code
//
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(7, LOW);
   digitalWrite(8, LOW);
   digitalWrite(4, LOW);
   digitalWrite(3, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}