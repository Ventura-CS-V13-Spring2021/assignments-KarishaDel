#include "DOB.hpp"
#include "address.hpp"
#include "student.hpp"
#include<iomanip>
#include <iostream>
using namespace std;

// Address::Address()
// {

// }

// Address::Address(string str, string st, int z)
// {

// }

string Address::getStreet() const
{
    return street;
}

string Address::getState() const
{
    return state;
}

int Address::getZip() const
{
    return zip;
}

void Address::printAddress() const
{
    cout << street << " " << state << " " << zip << "\n";
}

void Address::setStreet(string str)
{
    street = str;
}

void Address::setState(string st)
{
    state = st;
}

void Address::setZip(int z)
{
    zip = z;
}

void Address::setAddress(string StName, string st, int z)
{
    street = StName;
    state = st;
    zip = z;
}