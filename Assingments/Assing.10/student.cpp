#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include "student.hpp"

using namespace std;

// Student::Student(string n, int num)
// {
//     n = name;
//     num = numClasses;
// }

// Student::Student(const Student& rhs) //copy const
// {

// }

Student::~Student()
{
    numClasses = 0;
    resetClass();
    name = " ";
}

Student& Student::operator=(const Student& rhs)
{
    resetClass();

    numClasses = rhs.numClasses;    
    if(numClasses > 0)
    {
        classList = new string[numClasses];
        for(int i = 0; i < numClasses; i++)
        classList[i] = rhs.classList[i];    
    }
    return *this; //this will return the object in this function
}

void Student::inputClass()
{
    cout << "Name: \n ";
    cin >> name;
    cout << "Number of Classes: \n";
    cin >> numClasses;
    cin.ignore(2,'\n');

    if(numClasses > 0)
    {
        classList = new string [numClasses];
        for (int i = 0; i < numClasses; i++)
        {
            cout << "Class name " << (i+1) << " : ";
            getline(cin, classList[i]);
        }
    }
    cout << endl;
}

void Student::resetClass()
{
    if(classList)
    {
        delete [] classList;
        classList = NULL;
        numClasses = 0;
    }

}

void Student::printAll() const
{
    cout << "Name of the student: " << name << endl;
    cout << "Class List:" << endl;
    for(int i = 0; i < numClasses; i++)
    {
        cout << setw(2) << right << classList[i] << endl;
    }
}

string Student::getName() const
{
    return name;
}

int Student::getNumclasses() const
{
    return numClasses;
}
