#include <iostream>
#include <fstream>

using namespace std;
void getInput(char, int &, int &);

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
}    