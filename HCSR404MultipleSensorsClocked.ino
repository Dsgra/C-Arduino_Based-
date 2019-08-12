
#include <Wire.h>  
#include "RTClib.h"
RTC_Millis rtc;
#include <NewPing.h>

// DS1302:  RST pin    -> Arduino Digital 2
//          DATA pin   -> Arduino Digital 3
//          CLK pin  -> Arduino Digital 4


#define TRIGGER_PIN1  2 // defining trigger Pin/Sensor1 UPSIDE
#define ECHO_PIN1     3 // defining echo Pin/Sensor1 
#define MAX_DISTANCE1 400 // de  fining Max Dist Pin/Sensor1 

#define TRIGGER_PIN2  4 // defining trigger Pin/Sensor2 BACK
#define ECHO_PIN2     5 // defining echo Pin/Sensor2 
#define MAX_DISTANCE2 400 // defining Max Dist Pin/Sensor2 

#define TRIGGER_PIN3  6 // defining trigger Pin/Sensor3 FRONT
#define ECHO_PIN3     7 // defining echo Pin/Sensor3
#define MAX_DISTANCE3 400 // defining Max Dist   Pin/Sensor3

#define TRIGGER_PIN4  8 // defining trigger Pin/Sensor4 LEFT    
#define ECHO_PIN4     9  // defining echo Pin/Sensor4
#define MAX_DISTANCE4 400 // defining Max Dist Pin/Sensor4

#define TRIGGER_PIN5  10 // defining trigger Pin/Sensor5 RIGHT
#define ECHO_PIN5     11 // defining echo Pin/Sensor5
#define MAX_DISTANCE5 400 // defining Max Dist Pin/Sensor5

#define TRIGGER_PIN6  12 // defining trigger Pin/Sensor6 DOWN 
#define ECHO_PIN6     13 // defining echo Pin/Sensor6
#define MAX_DISTANCE6 400 // defining Max Dist Pin/Sensor6

// Create New Ping for all Pins (Individually) / Alter the names
// Create customise names and implementing the direction within the system

NewPing sonar1(TRIGGER_PIN1, ECHO_PIN1, MAX_DISTANCE1); 
NewPing sonar2(TRIGGER_PIN2, ECHO_PIN2, MAX_DISTANCE2); 

NewPing sonar3(TRIGGER_PIN3, ECHO_PIN3, MAX_DISTANCE3);
NewPing sonar4(TRIGGER_PIN4, ECHO_PIN4, MAX_DISTANCE4);

NewPing sonar5(TRIGGER_PIN5, ECHO_PIN5, MAX_DISTANCE5); 
NewPing sonar6(TRIGGER_PIN6, ECHO_PIN6, MAX_DISTANCE6);


void setup() {
  Serial.begin(115200);
  rtc.begin(DateTime(__DATE__, __TIME__)); 
}
 
void loop() {    
  DateTime now = rtc.now();
    Serial.print(now.year(), DEC);
    Serial.print('/'); 
    Serial.print(now.month(), DEC);
    Serial.print('/');
    Serial.print(now.day(), DEC);
    Serial.print(' ');
    Serial.print(now.hour(), DEC);
    Serial.print(':');
    Serial.print(now.minute(), DEC);
    Serial.print(':');
    Serial.print(now.second(), DEC);
    Serial.println(); 
    Serial.print(" seconds since 1970: ");
    Serial.println(now.unixtime());
    
    // calculate a date which is 7 days and 30 seconds into the future
    
    DateTime future (now.unixtime() + 7 * 86400L + 30);
    Serial.print(" now + 7d + 30s: ");
    Serial.print(future.year(), DEC);
    Serial.print('/');
    Serial.print(future.month(), DEC);
    Serial.print('/');
    Serial.print(future.day(), DEC);
    Serial.print(' ');
    Serial.print(future.hour(), DEC);
    Serial.print(':');
    Serial.print(future.minute(), DEC);
    Serial.print(':');
    Serial.print(future.second(), DEC);
    Serial.println();
    Serial.println();
    delay(500);                
    
  Serial.print("Ping1: ");
  Serial.println("Upside");
  Serial.print(sonar1.ping_cm());
  Serial.println("cm");
  delay(20); 
  
  Serial.print("Ping2: ");
  Serial.println("Back");
  Serial.print(sonar2.ping_cm());
  Serial.println("cm");
  delay(20);  
  
  Serial.print("Ping3: ");
  Serial.println("Front");
  Serial.print(sonar3.ping_cm());
  Serial.println("cm");
  delay(20); 
  
  Serial.print("Ping4: ");
  Serial.println("Left");
  Serial.print(sonar4.ping_cm());
  Serial.println("cm");
  delay(20);  
  
  Serial.print("Ping5: ");
  Serial.println("Right");
  Serial.print(sonar5.ping_cm());
  Serial.println("cm");
  delay(20);       
  
  Serial.print("Ping6: ");
  Serial.println("Down");
  Serial.print(sonar6.ping_cm());
  Serial.println("cm");
  delay(20);           
 
}
