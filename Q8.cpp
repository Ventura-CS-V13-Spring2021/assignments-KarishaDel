
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream 	ERfile;
    int emamt;
    int empID;
    string emNM;
    string emDP;
    double salary;

	ERfile.open("EmployeeRecord.txt");

    cout << "How many employees?" << endl;
    cin >> emamt;
    
for (int i; i < emamt; i++)
    {
        cout << "ID: "<< endl;
        cin >> empID;
        ERfile << empID<< endl;
        cout << "Name: " << endl;
        cin >> emNM;
        ERfile << emNM<< endl;
        cout << "Department: " << endl;
        cin >> emDP;
        ERfile << emDP<< endl;
        cout << "Salary: " << endl;
        cin >> salary;
        ERfile << salary<< endl; 
    }


	ERfile.close();
}    
