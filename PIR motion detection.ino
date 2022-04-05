// C++ code
//
int pir = 2;
int led1 = 3;
int led2 = 4;
void setup()
{
  pinMode(pir, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int i = digitalRead(pir);
  Serial.print(i);
  
  if (i == 1){
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    delay(1000);
  }
  else{
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led2, LOW);
    delay(1000);
}
}