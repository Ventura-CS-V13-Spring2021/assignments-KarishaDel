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
    int emamt;
    ifs.open("EmployeeRecord.txt");

    cout << "How many files would you like to compare?" << endl;
    cin >> emamt;
    
    for(int i; i < emamt; i++)
    {
        ifs >> empID;
        ifs >> emNM;
        ifs >> emDP;
        ifs >> salary;
        cout << "ID: " << empID<< endl;
        cout << "Name: " << emNM << endl;
        cout << "Department: " << emDP << endl;
        cout << "Salary: " << salary << endl; 
    }
    
 
        

}

