#include <Wire.h>
#include <bv4619_I.h>

  LCD disp(0x3A);

void setup(){}

void loop()
{
  disp.lcd_cls();
  delay(5000);

  disp.lcd_print("working...");

  Wire.beginTransmission(0x3A);
  Wire.write(0x91);
  Wire.write(32);
  Wire.write(1);
  Wire.endTransmission();
  delay(3000);

  Wire.beginTransmission(0x3A);
  Wire.write(0x91);
  Wire.write(33);
  Wire.write(1);
  Wire.endTransmission();
  delay(3000);

  Wire.beginTransmission(0x3A);
  Wire.write(0x91);
  Wire.write(34);
  Wire.write(77);
  Wire.endTransmission();
  delay(3000);

  Wire.beginTransmission(0x3A);
  Wire.write(0x91);
  Wire.write(35);
  Wire.write(76);
  Wire.endTransmission();
  delay(3000);

  Wire.beginTransmission(0x3A);
  Wire.write(0x91);
  Wire.write(36);
  Wire.write(67);
  Wire.endTransmission();
  delay(3000);

  Wire.beginTransmission(0x3A);
  Wire.write(0x91);
  Wire.write(37);
  Wire.write(57);
  Wire.endTransmission();
  delay(3000);

  Wire.beginTransmission(0x3A);
  Wire.write(0x91);
  Wire.write(38);
  Wire.write(48);
  Wire.endTransmission();
  delay(3000);

  Wire.beginTransmission(0x3A);
  Wire.write(0x91);
  Wire.write(39);
  Wire.write(48);
  Wire.endTransmission();
  delay(3000);

  Wire.beginTransmission(0x3A);
  Wire.write(0x91);
  Wire.write(40);
  Wire.write(48);
  Wire.endTransmission();
  delay(3000);

  Wire.beginTransmission(0x3A);
  Wire.write(0x91);
  Wire.write(41);
  Wire.write(0);
  Wire.endTransmission();
  delay(3000);

  disp.lcd_print("Done");

  delay(5000);
}

