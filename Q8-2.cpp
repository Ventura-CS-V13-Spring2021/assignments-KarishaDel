#include <iostream>
#include <fstream>
using namespace std;


int main ()
{
    ifstream ifs;
    int empID;
    string emNM;
    string emDP;
    double salary;

    ifs.open("EmployeeRecord.txt");
    if (ifs.fail() ) 
    {
        cerr << "File open error\n";
        exit (0);
    }
    
    while(!ifs.eof())
    {
        cout << "ID: " << empID<< endl;
        cout << "Name: " << emNM << endl;
        cout << "Department: " << emDP << endl;
        cout << "Salary: " << salary << endl;
    }
    
//
}