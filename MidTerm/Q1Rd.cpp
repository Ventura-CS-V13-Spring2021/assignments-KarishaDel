#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    ifstream ifs;
    string StdNm;
    int Grd1;
    int Grd2;
    int NumStd;
    double sum = 0.0;
    int count = 0; 
    float avg;

    ifs.open("Student.txt");

while(ifs >> Grd1 >> Grd2 >> StdNm)
{
 
    sum = Grd1 + Grd2;
    cout << "Name: " << StdNm<< endl;
    cout << "Grade 1: " << Grd1 << endl;
    cout << "Grade 2: " << Grd2 << endl;
}
    cout << "Total: " << sum << endl;
    cout << count << endl;
    avg = sum/10;
    cout << "Avarage: " << avg << endl;
}