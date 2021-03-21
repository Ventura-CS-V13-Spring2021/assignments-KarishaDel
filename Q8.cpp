
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

    cout << "Hoaw many";
    cin >> emamt;
for (int i; i < emamt; i++)
    {
        cout << "id"<< endl;
        cin >> empID;
        cout << "name" << endl;
        cin >> emNM;
        cout << "dep" << endl;
        cin >> emDP;
        cout << "sala" << endl;
        cin >> salary;
    }


	ERfile.close();
}    
