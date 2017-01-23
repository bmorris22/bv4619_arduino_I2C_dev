#include <Wire.h>
#include <bv4619_I.h>

  LCD disp(0x39);



void setup()
{
  disp.lcd_cls();
  delay(500);

  disp.lcd_print("working...");

  Wire.beginTransmission(0x39);
  Wire.write(0x91);
  Wire.write(32);
  Wire.write(1);
  Wire.endTransmission();
  delay(3000);

  Wire.beginTransmission(0x39);
  Wire.write(0x91);
  Wire.write(33);
  Wire.write(1);
  Wire.endTransmission();
  delay(3000);

  Wire.beginTransmission(0x39);
  Wire.write(0x91);
  Wire.write(34);
  Wire.write(102);
  Wire.endTransmission();
  delay(3000);

  Wire.beginTransmission(0x39);
  Wire.write(0x91);
  Wire.write(35);
  Wire.write(114);
  Wire.endTransmission();
  delay(3000);

  Wire.beginTransmission(0x39);
  Wire.write(0x91);
  Wire.write(36);
  Wire.write(101);
  Wire.endTransmission();
  delay(3000);

  Wire.beginTransmission(0x39);
  Wire.write(0x91);
  Wire.write(37);
  Wire.write(100);
  Wire.endTransmission();
  delay(3000);

  Wire.beginTransmission(0x39);
  Wire.write(0x91);
  Wire.write(38);
  Wire.write(0);
  Wire.endTransmission();
  delay(3000);

  

  disp.lcd_print("done");
}

void loop() {}
