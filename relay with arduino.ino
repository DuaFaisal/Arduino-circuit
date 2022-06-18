#define relay 2
void setup()
{
  pinMode(relay, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(relay, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(relay, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}