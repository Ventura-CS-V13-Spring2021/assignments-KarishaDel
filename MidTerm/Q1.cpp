#include <iostream>
#include <fstream>

using namespace std;
//void getInput(char, int &, int &);
void fileWrt (ofstream &, string, int);
int main()
{
    ofstream StdntFile;
    string StdNm;
    int Grd1;
    int Grd2;
    int NumStd;

    StdntFile.open("Student.txt");

    cout << "How many student?" << endl;
    cin >> NumStd;

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
void fileWrt (ofstream &StdntFile, int Grd1, int Grd2)
{
    
} 