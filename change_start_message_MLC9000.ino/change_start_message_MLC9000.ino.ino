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
  delay(300);
  Wire.endTransmission();
  delay(300);

  Wire.beginTransmission(0x39);
  Wire.write(0x91);
  Wire.write(33);
  Wire.write(1);
  delay(300);
  Wire.endTransmission();
  delay(300);

  Wire.beginTransmission(0x39);
  Wire.write(0x91);
  Wire.write(34);
  Wire.write(77);
  delay(300);
  Wire.endTransmission();
  delay(300);

  Wire.beginTransmission(0x39);
  Wire.write(0x91);
  Wire.write(35);
  Wire.write(76);
  delay(300);
  Wire.endTransmission();
  delay(300);

  Wire.beginTransmission(0x39);
  Wire.write(0x91);
  Wire.write(36);
  Wire.write(67);
  delay(300);
  Wire.endTransmission();
  delay(300);

  Wire.beginTransmission(0x39);
  Wire.write(0x91);
  Wire.write(37);
  Wire.write(57);
  delay(300);
  Wire.endTransmission();
  delay(300);

  Wire.beginTransmission(0x39);
  Wire.write(0x91);
  Wire.write(38);
  Wire.write(48);
  delay(300);
  Wire.endTransmission();
  delay(300);

  Wire.beginTransmission(0x39);
  Wire.write(0x91);
  Wire.write(39);
  Wire.write(48);
  delay(300);
  Wire.endTransmission();
  delay(300);

  Wire.beginTransmission(0x39);
  Wire.write(0x91);
  Wire.write(40);
  Wire.write(48);
  delay(300);
  Wire.endTransmission();
  delay(300);

  Wire.beginTransmission(0x39);
  Wire.write(0x91);
  Wire.write(41);
  Wire.write(0);
  delay(300);
  Wire.endTransmission();
  delay(300);

  disp.lcd_print("Done");

  delay(5000);
}

void loop() {}

