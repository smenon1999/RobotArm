import processing.serial.*;

Serial myPort;

void setup()
{
   size(200,200); //make our canvas 200 x 200 pixels big
  String portName = Serial.list()[0]; //change the 0 to a 1 or 2 etc. to match your port
  myPort = new Serial(this, portName, 9600);
  
}

void draw ()
{
  
  if(keyPressed == true)
  {
    
    if(key == 'w' || key == 'W')
    {
      myPort.write('1');
      println("1");//Turn Right
      
    }
    
     if(key == 'q' || key == 'Q')
    {
      myPort.write('2');
      println("2"); //Turn left
      
    }
    
    if(key == 's' || key == 'S')
    {
      myPort.write('3'); //lower arm
      println("3");
      
    }
     if(key == 'a' || key == 'A')
    {
      myPort.write('4'); //raise arm
      println("4");
      
    }
     if(key == 'M' || key == 'm')
    {
      myPort.write('5');
      println("5"); //Close gripper
      
    }
     if(key == 'n' || key == 'N')
    {
      myPort.write('6');
      println("6"); //open Gripper
      
    }
     if(key == 'o' || key == 'O')
    {
      myPort.write('7');
      println("7"); //elbow
      
    }
     if(key == 'p' || key == 'P')
    {
      myPort.write('8');
      println("8"); //elbow
      
    }
    if(key == 'k' || key == 'K')
    {
      myPort.write('9');
      println("9"); //wrist
      
    }
     if(key == 'l' || key == 'L')
    {
      myPort.write('0');
      println("0"); // wrist
      
    }
    
  
   }
  else if(keyPressed == false)
    myPort.write('l');
    println("l");
 
  
}