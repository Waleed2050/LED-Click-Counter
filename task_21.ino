int green=7;
int yellow=6;
int red = 3;
int pushbutton=9;
int number=0;



void setup()
{
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(pushbutton, INPUT);
}
void loop()
{
  if(digitalRead(pushbutton)== HIGH)
  {number++;
  if(number==4){number=0;}
  delay(250);}
  switch (number){
  case 0:
     digitalWrite(yellow,LOW);
     digitalWrite(green,LOW);  
     digitalWrite(red,LOW);  
     break;
  case 1:digitalWrite(red,HIGH);    break;
  case 2:digitalWrite(yellow,HIGH); break;
  case 3:digitalWrite(green,HIGH);   break;
}
   
}