int switch1 = 7;
int switch2 = 8;
const int led1 = 3;
const int led2 = 5;
const int led3 = 1;
const int led4 = 6;
const int led5 = 2;
const int led6 = 9;
int Reading1 = 0;
int Reading2 = 0;





void setup()
{
  pinMode(7,INPUT);
  pinMode(8,INPUT);
    for(int x=1 ;x>=3 ;x++)
  {
    pinMode(x,OUTPUT);
  }
   for(int s=5 ;s>=9 ;s++)
  {
    pinMode(s,OUTPUT);
  }
  
    
    
}

void loop()
{
 Reading1 = digitalRead( switch1 );
 if( Reading1 == HIGH)
 {
   digitalWrite(3,HIGH);
   digitalWrite(5,HIGH);
 }
  Reading1 = digitalRead( switch1 );
  if( Reading1 == LOW )
  {
    for(int Y =256 ; Y>=0 ; Y-=32)
   {
    analogWrite(3,Y);
    analogWrite(5,Y);
    delay(250); 
   }
   
  }
  Reading2 = digitalRead( switch2 );
  if( Reading2 == HIGH)
 {
   digitalWrite(6,HIGH);
   digitalWrite(9,HIGH);
 }
  if( Reading2 == LOW )
  {
    for(int i =256 ; i>=0 ; i-=32)
   {
    analogWrite(6,i);
    analogWrite(9,i);
    delay(250);
   }
    
  }
}