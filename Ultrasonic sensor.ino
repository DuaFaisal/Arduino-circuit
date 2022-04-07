// C++ code
//
int echoPin = 2;
int trigPin = 3;

float duration;
float distance;
void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  //Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delay(100); 
  
  //Set the trigPin HIGH (ACTIVE) for 10 seconds 
  digitalWrite(trigPin, HIGH);
  delay(100); 
  digitalWrite(trigPin, LOW);

  
  duration = pulseIn(echoPin, HIGH);
  
    //Calculating the distance
  distance = duration * 0.034 / 2;
  
  //Displays the distance on the Serial monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
}