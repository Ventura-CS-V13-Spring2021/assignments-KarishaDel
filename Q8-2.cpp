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
    
    ifs >> empID;
    if (ifs.fail())
    {
        cerr << "Read Erro ID\n";
    }

    ifs >> emNM;
    if (ifs.fail())
    {
        cerr << "Read Erro Name\n";
    }

    ifs >> emDP;
    if (ifs.fail())
    {
        cerr << "Read Error DP\n";
    }

    ifs >> salary;
    if (ifs.fail())
    {
        cerr << "Read Error Salary\n";
    }
    
    cout << "Emp ID" << empID<< endl;
    cout << "Name: " << emNM << endl;
    cout << "DP: " << emDP << endl;
    cout << "Salary: " << salary << endl;
}