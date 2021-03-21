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
    double sum = 0.0;
    int count = 0; 
    float avg;

    ifs.open("EmployeeRecord.txt");

while(ifs >> empID >> emNM >> emDP >> salary)
{
    count++; 
    sum += salary;
    cout << "ID: " << empID<< endl;
    cout << "Name: " << emNM << endl;
    cout << "Department: " << emDP << endl;
    cout << "Salary: " << salary << endl;

}          
    cout << "Total: " << sum << endl;
    cout << count << endl;
    avg = sum/count;
    cout << "Avarage: " << avg << endl;
}
