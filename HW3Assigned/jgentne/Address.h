#ifndef ADDRESS_H_
#define ADDRESS_H_
#include <string>

class Address {

public:

   Address(const std::string& _street, const std::string& _city, const std::string& _state, int _zip);

   virtual std::string getAddress();
   virtual int getZipCode() const;

private:

   const std::string state;
   const int zip;
   const std::string street;
   const std::string city;

};
#endif /* ADDRESS_H_ */
