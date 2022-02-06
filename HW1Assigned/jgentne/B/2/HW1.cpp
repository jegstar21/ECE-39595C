#include <string>
#include <iostream>
#include "Automobile.h"

int main (int argc, char * argv[]){
    Automobile* car1 = new Automobile(2092736419, 52895.3, 9, 20 ,18);
    std::cout << "\nVIN Number: " << car1->getVin() << std::endl;
    std::cout << "Current Mileage: " << car1->getMiles() << std::endl;
    std::cout << "Last Maintenance Date: " << car1->getMM() << "/" << car1->getDD() << "/" << car1->getYY() << std::endl;

    Automobile* car2 = new Automobile(1048264934, 91234.7, 11, 18, 99);
    std::cout << "\nVIN Number: " << car2->getVin() << std::endl;
    std::cout << "Current Mileage: " << car2->getMiles() << std::endl;
    std::cout << "Last Maintenance Date: " << car2->getMM() << "/" << car2->getDD() << "/" << car2->getYY() << std::endl;
}