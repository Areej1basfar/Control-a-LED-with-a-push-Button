int button = 0;

void setup()
{
  pinMode(2,INPUT);
  pinMode(13,OUTPUT);
  
}

void loop()
{
  //read the state of the pushbutton
  button = digitalRead(2);
  //check if pushbutton is pressed.if it is,the
  //button state is HIGH
  if (button == HIGH) {
    digitalWrite(13,HIGH);
  }
    else{
      digitalWrite(13,LOW);
  }
  delay(10); //Delay a littel bit to improve simulation
}