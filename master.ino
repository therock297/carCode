//Master

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
   Serial.println("F");
   digitalWrite(12, HIGH);
   digitalWrite(10, HIGH);

   delay(3000);
   Serial.println("S");
   digitalWrite(12, LOW);
   digitalWrite(10, LOW);
   delay(500);
   
    Serial.println("B");
    digitalWrite(11, HIGH);
    digitalWrite(9, HIGH);
   delay(3000);

   Serial.println("S");
   digitalWrite(11, LOW);
   digitalWrite(9, LOW);
   delay(500);

   Serial.println("L");
    digitalWrite(12, HIGH);
   delay(3000);

   Serial.println("S");
   digitalWrite(12, LOW);
   delay(500);

   Serial.println("R");
    digitalWrite(10, HIGH);
   delay(3000);

    Serial.println("S");
   digitalWrite(10, LOW);
   delay(500);
   
    
  
   
    

   
   
  
}
