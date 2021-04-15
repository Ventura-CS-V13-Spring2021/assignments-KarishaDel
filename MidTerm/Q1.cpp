#include <iostream>
#include <fstream>

using namespace std;

void fileWrt (ofstream &, string, int, int);
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
   
        cout << "Grade 1: " << endl;
        cin >> Grd1;
    
        cout << "Grade 2: " << endl;
        cin >> Grd2;
    }

   
} 

void fileWrt (ofstream &StdntFile, string &StdNm, int &Grd1, int &Grd2, int &NumStd)
{
    // string StdNm;
    // int Grd1;
    // int Grd2;
    // int NumStd;
        
    for (int i; i < NumStd; i++)
    {
        StdntFile << StdNm<< endl;
        StdntFile << Grd1<< endl;
        StdntFile << Grd2<< endl;
        StdntFile << NumStd<< endl;
    } 
} 