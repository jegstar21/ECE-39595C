#include <string>
#include <iostream> 
#include "Automobile.h"

Automobile::Automobile(int _vin, float _miles, int _mm, int _dd, int _yy){
    vin = _vin;
    miles = _miles;
    mm = _mm;
    dd = _dd;
    yy =_yy;
}

int Automobile::getVin(){
    return vin;
}

float Automobile::getMiles(){
    return miles;
}

int Automobile::getDD(){
    return dd;
}

int Automobile::getMM(){
    return mm;
}

int Automobile::getYY(){
    return yy;
}
