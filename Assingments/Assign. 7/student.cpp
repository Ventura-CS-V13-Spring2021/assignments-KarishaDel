#include "DOB.hpp"
#include "address.hpp"
#include "student.hpp"
#include<iomanip>
#include <iostream>
using namespace std;

// Student::Student()
// {
//     sname = " ";
//     id = 0;

// }

// Student::Student(string stname, int idnum, DOB date, Address addr)
// {
//     cout << "Hi" << endl;
//     sname = stname;
//     cout << sname;
//     id = idnum;
//     dob = date;
//     address = addr;
//     cout << sname << " " << id;
//     cout << dob.getMonth() << endl;
//     cout << addr.getStreet() << endl;
// }

Student::Student() : sname("noname"), id(0), dob(1, 1, 1900), address("NA", "NA", 0)
{
}
Student::Student(string stname, int idnum, DOB date, Address addr) : sname(stname), id(idnum), dob(date), address(addr)
{
}

int Student::getID() const
{
    return id;
}

string Student::getSname() const
{
    return sname;
}
   
DOB Student::getDOB() const
{
    return dob;
}

Address Student::getAddress() const
{
    return address;
}

void Student::setSname(string name)
{
    sname = name;
}

void Student::setID(int num)
{
    id = num;
}

void Student::setDOB(DOB dates)
{
    dob = dates;
}
   
void Student::setAddress(Address addr)
{
    address = addr; 
}
   
void Student::printStudent() 
{
    cout << sname << " " << id << "\n"; 
    address.printAddress();
    dob.printDate();
}
