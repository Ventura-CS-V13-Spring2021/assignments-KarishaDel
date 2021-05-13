#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Student
{
    private: 
        string name;
        int numClasses;
        string *classList;

    public: 
        Student() : name(), numClasses(0), classList(NULL) {};
        Student(string n, int num);
        Student(const Student& rhs); //copy const
        ~Student();
        Student& operator=(const Student& rhs);
        void inputClass();
        void resetClass();
        void printAll() const;
        string getName() const;
        int getNumclasses() const;

};
#endif
/* I ended up removing the parameters in line 21. I didnt use them in the program and it 
was coausing conflicts with my student.cpp. Since the program didnt have alot of information
I didn see the need to create anyother variables. */