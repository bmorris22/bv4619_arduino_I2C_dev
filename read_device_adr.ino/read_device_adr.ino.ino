#include <Wire.h>
#include <bv4619_I.h>

LCD disp(0x39);

void setup() 
{
  Serial.begin(9600);
  
  disp.lcd_cls();
  disp.lcd_print("hello");
}
void loop()
{
  
  //byte numBytes[3] = {0x67, 0x2d, 0x31};
 
  Wire.beginTransmission(0x39);

  Wire.write(0x90);
  Wire.write(33);
  Wire.write(0x72);
  delay(300);
  Wire.endTransmission();
  Wire.requestFrom(0x39, 1);
  delay(300);
  /*char a = Wire.available();
  Serial.print(int (a));
  Serial.print("\n");
  delay(500);*/
  byte c = Wire.read();
  Serial.print(int (c));
  Serial.print("\n");
  delay(3000);
}


