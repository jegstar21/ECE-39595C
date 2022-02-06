#ifndef AUTOMOBILE_H_
#define AUTOMOBILE_H_

#include <string>
#include <iostream>

class Automobile{
private:
    int vin;
    float miles;
    int mm;
    int dd;
    int yy;

public:
    Automobile(int _vin, float _miles, int _mm, int _dd, int _yy);
    int getVin();
    float getMiles();
    int getDD();
    int getMM();
    int getYY();
};

#endif