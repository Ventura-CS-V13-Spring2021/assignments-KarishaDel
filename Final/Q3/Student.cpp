#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include "Student.hpp"

using namespace std;

Student::~Student()
{
    resetClass();
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

/*
line 9- this is the destructer that calls the resetClass function
line 14- this will replace the content of the existing object.
line 21-23 is the copy constructer with deep copy which allocates similiar memroy resources witht the same value as the object. 
line 34- is for looks, this is used with getline so its not all piled into one line since we cant add the \n to a getline
line 48- this is the function that will clear out the information once the function is done running.
*/

