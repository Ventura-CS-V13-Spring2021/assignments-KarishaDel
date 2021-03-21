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
    bool done {false};
    string text;

    ifs.open("EmployeeRecord.txt");
    while(!done)
    {
        if(ifs >> text)
        {
        cout << "ID: " << empID<< endl;
        cout << "Name: " << emNM << endl;
        cout << "Department: " << emDP << endl;
        cout << "Salary: " << salary << endl;
        }
        else
        {
            cout<<"done"<<endl;
            done = true;
        }
    }

    

}