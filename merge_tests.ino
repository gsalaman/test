// This file is going to help me play with merges in github and arduino.

// Master branch is going to use ver_led, dev branch is going to remove it.  When I merge
// I'm gonna want to keep it.
#include "ver_led.h"

void setup()
{
  Serial.begin(9600);
  
  ver_led_setup(5);
}

void loop()
{
  static int i=0;
  char my_string[40];
  
  sprintf(my_string, "Number = %d", i);
  
  Serial.print("MASTER: ");
  Serial.println(my_string);

  i++;
  if (i>20) i= 0;
  
  ver_led_run();
  delay(100);
}
