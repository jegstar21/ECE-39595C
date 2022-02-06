#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include "Address.h"
#include "Person.h"

class Employee : public Person {
   
public:

   Employee(std::string _name, int _birthMonth, int _birthDay, int _birthYear, Address _address, double _salary); 
   virtual double getSalary( ); 
   virtual std::string getRole( ); 

private:

   const double salary;
};
#endif /* EMPLOYEE_H_ */
