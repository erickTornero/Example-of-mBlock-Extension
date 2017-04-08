#ifndef gyro_h
#define gyro_h

#include <Arduino.h>
#define MPU 0x68
#define A_R 16384.0
#define G_R 131.0
class Gyroscope
{
  public:
    float anguloX();
    float anguloY();
    float anguloZ();
    void initGyroscope()
  private:
    int16_t AcX, AcY, AcZ, GyX,GyY,GyZ;
    float Acc[2];
    float Gy[2];
    float Angle[2];
    unsigned long time;
};
#endif
