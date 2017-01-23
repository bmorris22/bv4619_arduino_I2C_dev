#include <Wire.h>
#include <bv4619_I.h>

void setup()
{
  LCD disp(0x39);

  disp.lcd_cls();

  Wire.beginTransmission(0x39);
  Wire.write(0x91);
  Wire.write(1);
  Wire.write(0x74);
  delay(300);
  Wire.endTransmission();
  delay(300);

  disp.lcd_print("Wrote at location 1!\n");

  Wire.beginTransmission(0x39);
  Wire.write(0x91);
  Wire.write(14);
  Wire.write(0x74);
  delay(300);
  Wire.endTransmission();
  delay(300);

  disp.lcd_print("Wrote and location 14!\n Done!");
  
}

void loop() {}


