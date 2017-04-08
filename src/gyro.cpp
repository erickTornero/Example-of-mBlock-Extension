#include "gyro.h"
float Gyroscope::anguloX()
{

}

float Gyroscope::anguloY()
{

}
float Gyroscope::anguloZ()
{

}
void Gyroscope::initGyroscope()
{
  Wire.begin();
  Wire.beginTransmission(MPU);
  Wire.write(0x6B);
  Wire.write(0);
  Wire.endTransmission(true);
  time = 0.010;
}
