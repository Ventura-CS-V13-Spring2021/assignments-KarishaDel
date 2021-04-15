#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string StdNm;
    int Grd1;
    int Grd2;
    int NumStd;

    ofstream StdntFile;
    StdntFile.open("Student.txt");
    if (StdntFile.fail())
    {
        cerr << "Error.";
        exit(0);
    }

    cout << "How many student?" << endl;
    cin >> NumStd;

    for (int i; i < NumStd; i++)
    {
        cout << "Student name?"<< endl;
        cin >> StdNm;
        StdntFile << StdNm<< endl;
        cout << "Grade 1: " << endl;
        cin >> Grd1;
        StdntFile << Grd1<< endl;
        cout << "Grade 2: " << endl;
        cin >> Grd2;
        StdntFile << Grd2<< endl;
    }

    StdntFile.close();

   
} 
