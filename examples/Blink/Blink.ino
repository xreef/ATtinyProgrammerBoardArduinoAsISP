#define PIN 0

void setup()
{
  pinMode(PIN, OUTPUT);
}

void loop()
{
  digitalWrite(PIN, LOW);
  delay(500);
  digitalWrite(PIN, HIGH);
  delay(500);
}
