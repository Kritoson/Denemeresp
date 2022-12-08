/*
Program: Receive Strings From Raspberry Pi
File: receive_string_from_raspberrypi.ino
Description: Receive strings from a Raspberry Pi
Author: Addison Sears-Collins
Website: https://automaticaddison.com
Date: July 5, 2020
*/

const int BUFFER_SIZE = 48;
char buf[6]; 
void setup(){
   
  // Set the baud rate  
  Serial.begin(9600);
   
}
 
void loop(){
  

  
   /* int rlen = Serial.readBytes(5,buf, BUFFER_SIZE);
      Serial.print(" You sent me: ");   
      Serial.print(rlen);
      rlen = 0;*/

     
      int value = 0;
       value = Serial.readString().toInt();
       Serial.print(" You sent me: ");      
       Serial.print(value);
      if(value == 1)      Serial.println(" A");
      else if(value == 2)      Serial.println(" B");
      else if(value == 3)      Serial.println(" C");
      else if(value == 4)      Serial.println(" D");
      else if(value == 5)      Serial.println(" E");
      else if(value == 6)      Serial.println(" F");
      else Serial.println("Bir elamet geldi "+ value);
/*
    char s[] = "01001011";
    int value = 0;


    
   Serial.print(value);
*/
 //   Serial.print(" You sent me: ");
 //   Serial.write(buf,24);
  
}