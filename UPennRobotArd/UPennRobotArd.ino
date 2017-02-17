#include <Servo.h>
char val;
// this is a change
int swivelPos = 0;
int shoulderPos = 0;
int elbowPos = 0;
int wristPos = 0;
int clampPos = 0;


Servo Clamp;
Servo Wrist;
Servo Elbow;
Servo Shoulder; 
Servo Swivel;

void setup() 
{
pinMode(13, OUTPUT); 
pinMode(12, OUTPUT); 
pinMode(8, OUTPUT);
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);

Serial.begin(9600); 

Swivel.attach(13);

Shoulder.attach(12);

Elbow.attach(10);

Wrist.attach(9);

Clamp.attach(8);

Shoulder.write(15);
Swivel.write(50);
}

void loop() 
{
if(Serial.available())
{
  val = Serial.read();

  if(val == '1')
  {
  swivelPos+=4;
  Swivel.write(swivelPos);
  
  }
  
else if(val == '2')
  {
  swivelPos-=4;
  Swivel.write(swivelPos);
 
  }
  
else if(val == '3')
  {
  shoulderPos+=1;
  Shoulder.write(9);
 
  }
  
 else if(val == '4')
  {
  shoulderPos-=1;
  Shoulder.write(26);
 
  }
    
else if(val == '5')
  {
  clampPos+=2;
  Clamp.write(clampPos);
 
  }
  
 else if(val == '6')
  {
  clampPos-=2;
  Clamp.write(clampPos);
 
  }
 else if(val == '7')
  {
  elbowPos+=2; 
  Elbow.write(elbowPos);
 
  }
  
 else if(val == '8')
  {
  elbowPos-=2;
  Elbow.write(elbowPos);
 
  }
   else if(val == '9')
  {
  wristPos+=2; 
  Wrist.write(wristPos);
 
  }
  
  else if(val == '0')
  {
  wristPos-=2;
  Wrist.write(wristPos);
 
  }
  else if(val == 'p')
  {
 
 Swivel.write(0);
  }
  else{
    Shoulder.write(18);
  }
 
delay(10);


}//end uf Serial.available

}// end loop
