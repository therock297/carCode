// slave


char s;

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);

  Serial.begin(9600);

}

void loop()
{

  if (Serial.available())
  {
    s = Serial.read();
    Serial.println('s');
    Serial.println('k');
  }

  if (s == 'F') {          //move forward(all motors rotate in forward direction)
    digitalWrite(12, HIGH);
    digitalWrite(10, HIGH);

    Serial.println('f');
  }

  else if (s == 'B') {    //move reverse (all motors rotate in reverse direction)
    digitalWrite(11, HIGH);
    digitalWrite(9, HIGH);

    Serial.println('b');
  }

  else if (s == 'L') {
    Serial.println('l');
    digitalWrite(12, HIGH); //turn left (right side motors rotate in forward direction, left side motors doesn't rotate)
  }

  else if (s == 'R') {    //turn right (left side motors rotate in forward direction, right side motors doesn't rotate)
    digitalWrite(10, HIGH);
    Serial.println('r');
  }

  else if (s == 'S') 
  {    //STOP (all motors stop)
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
  }

  delay(100);




}
