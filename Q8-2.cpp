#include <iostream>
#include <fstream>
using namespace std;


int main ()
{
    ifstream ifs;
    string text;
    double salary;

    ifs.open("EmployeeRecord.txt");
    if (ifs.fail() ) 
    {
        cerr << "File open error\n";
        exit (0);    
    }
    while(ifs >> text)
    {
        cout << text<<endl;
    }


    

}