#include <ESP8266WiFi.h>
 
void setup(){ 
   Serial.begin(115200);
   delay(500); 
}
 
void loop(){ 
  Serial.println();
  Serial.print("MAC: ");
  Serial.println(WiFi.macAddress());
  delay(2000);
}
