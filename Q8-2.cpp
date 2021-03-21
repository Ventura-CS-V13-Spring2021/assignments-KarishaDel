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

while(ifs >> empID >> emNM >> emDP >> salary)
{
    cout << "ID: " << empID<< endl;
    cout << "Name: " << emNM << endl;
    cout << "Department: " << emDP << endl;
    cout << "Salary: " << salary << endl; 
}

        

}


