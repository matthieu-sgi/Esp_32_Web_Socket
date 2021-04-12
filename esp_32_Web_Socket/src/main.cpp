#include <Arduino.h>
#include "OTA.h"
int a = OTA_setup();

void setup() {
  Serial.begin(115200);
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(a);
}