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
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);

Serial.begin(9600); 
Clamp.attach(9);
Wrist.attach(10); 
Elbow.attach(11);
Shoulder.attach(12);
Swivel.attach(13);
}

void loop() 
{
if(Serial.available())
{
  val = Serial.read();

  if(val == '1')
  {
  swivelPos+=2;
  Swivel.write(swivelPos);
  
  }
  
else if(val == '2')
  {
  swivelPos-=2;
  Swivel.write(swivelPos);
 
  }
  
else if(val == '3')
  {
  shoulderPos+=1;
  Shoulder.write(shoulderPos);
 
  }
  
 else if(val == '4')
  {
  shoulderPos-=1;
  Shoulder.write(shoulderPos);
 
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
  else{
    
  }

delay(10);


}//end uf Serial.available

}// end loop
