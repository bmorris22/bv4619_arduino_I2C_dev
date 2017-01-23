#include <Wire.h>
#include <bv4619_I.h>

//void setup(){}

void setup() {
  
  LCD disp(0x39);
  disp.lcd_cls();
  delay(500);

  disp.lcd_print("working...");

  Wire.beginTransmission(0x39);
  Wire.write(0x91);
  Wire.write(33);
  Wire.write(1);
  delay(500);
  Wire.endTransmission();
  delay(500);

  disp.lcd_print("Done!");
  delay(5000);
}

void loop() {}

