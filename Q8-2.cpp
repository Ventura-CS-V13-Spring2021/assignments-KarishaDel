#include <iostream>
#include <fstream>
using namespace std;


int main ()
{
    ifstream ifs;
    int emamt;
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
    

}