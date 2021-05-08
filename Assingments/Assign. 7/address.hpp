/* The class “Address” is to represent “street”, “state” and “zip code”. 
It has three member variables and getter and setter member functions as follows:
*/

#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>
using namespace std;
class Address
{
private:
   string street;
   string state;
   int zip;

public:
   Address() : street(NULL), state(NULL), zip(0) {};
   Address(string str, string st, int z) : street(str), state(st), zip(z) {};
   string getStreet() const;
   string getState() const;
   int getZip() const;
   void printAddress() const;
   void setStreet(string StName);
   void setState(string st);
   void setZip(int z);
   void setAddress(string StName, string st, int z);
};
#endif