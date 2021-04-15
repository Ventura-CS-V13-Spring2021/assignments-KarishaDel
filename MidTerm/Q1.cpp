#include <iostream>
#include <fstream>

using namespace std;
void getInput(char&, int&, int&, int&);
void fileWrt (ofstream &, string, int);
int main()
{
    ofstream StdntFile;
    StdntFile.open("Student.txt");
    if (StdntFile.fail())
    {
        cerr << "Error.";
        exit(0);
    }

   
} 
void getInput(char &StdNm, int &Grd1, int &Grd2, int &NumStd)
{
    int Grd1;
    int Grd2;
    int NumStd;
    int NumStd;

    cout << "How many student?" << endl;
    cin >> NumStd;
}


void fileWrt (ofstream &StdntFile, int, int)
{
    string StdNm;
    int Grd1;
    int Grd2;
    int NumStd;
        
    for (int i; i < NumStd; i++)
    {
        cout << "Name: "<< endl;
        cin >> StdNm;
        StdntFile << StdNm<< endl;
        cout << "Grade 1: " << endl;
        cin >> Grd1;
        StdntFile << Grd1<< endl;
        cout << "Grade 2: " << endl;
        StdntFile << Grd2<< endl;
    } 
} 