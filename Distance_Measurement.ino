//IR sensor setup to measure the distance at standard distances.
void setup() {
  // put your setup code here, to run once:
pinMode(6, INPUT); //IR Sensor 1
pinMode(3, INPUT); //IR Sensor 2
pinMode(4, INPUT); //IR Sensor 3
pinMode(5, INPUT); //IR Sensor 4
}

void loop() {
  // put your main code here, to run repeatedly:





if(digitalRead(5))
{
  if(digitalRead(4)==0)
  {
    Serial.println("4 cm");
  }
}

if(digitalRead(5))
{
  if(digitalRead(4))
  {
    if(digitalRead(3))
    {
      if(digitalRead(6))
      {
          Serial.println("1 cm");
      }
    }
  }
}

if(digitalRead(5))
{
  if(digitalRead(4))
  {
    if(digitalRead(3))
    {
      if(digitalRead(6)==0)
      {
          Serial.println("2 cm");
      }
    }
  }
}

if(digitalRead(5))
{
  if(digitalRead(4))
  {
    if(digitalRead(3)==0)
    {
      Serial.println("3 cm");
    }
  }
}
delay(200);
}
