#include <string>
#include <iostream> 
#include "Automobile.h"

Automobile::Automobile(int _vin, float _miles, int _mm, int _dd, int _yy){
    vin = _vin;
    miles = _miles;
    lastMaint = ""+std::to_string(_mm)+"/"+std::to_string(_dd)+"/"+std::to_string(_yy);
}

std::string Automobile::getlastMaint(){
    return lastMaint;
}

int Automobile::getVin(){
    return vin;
}

float Automobile::getMiles(){
    return miles;
}

