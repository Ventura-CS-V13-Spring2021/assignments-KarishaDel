/*
We are going to make the class “Student” that has the member variable “dob” of the class “DOB”, 
and also the member variable “address” of the class “Address”.  
First, we need to define the class “DOB” that has three private member data which are “month”,
“day” and “year”, and the class “Address” that has three member data, string “street”, 
string “state”, and integer “zip”.
*/

#ifndef STUDENT_H
#define STUDENT_H
#include "DOB.hpp"
#include "address.hpp"

class Student
{
private:
   string sname;
   int id;
   DOB dob;
   Address address;

public:
//    Student() : sname(NULL), id(0) {} ;
   Student() ;
   Student(string stname, int idnum, DOB date, Address addr);
   int getID() const;
   string getSname() const;
   DOB getDOB() const;
   Address getAddress() const;
   void setSname(string name);
   void setID(int num);
   void setDOB(DOB dates);
   void setAddress(Address addr);
   void printStudent();
};

#endif