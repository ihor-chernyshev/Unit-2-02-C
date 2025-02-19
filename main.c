/*
 * Created by Ihor Chernyshev
 * Created on Feb 2025
 * This program turns an LED on for one second, repeatedly, but the interval increases each time by 1 more second
 */

 int blinkTime = 1000; // set vatiable to 1000 or 1 second

 void setup() {
   pinMode(LED_BUILTIN, OUTPUT);
 }
 
 void loop() {
   digitalWrite(LED_BUILTIN, HIGH); // turn LED on
   delay(blinkTime);
   digitalWrite(LED_BUILTIN, LOW); // turn LED off
   delay(1000);
 
   blinkTime = blinkTime + 1000; // add 1 second to variable blinkTime
 }
