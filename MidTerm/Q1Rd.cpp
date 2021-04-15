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

while(ifs >> StdNm >> Grd1 >> Grd2)
{
    sum += Grd1 + Grd2;
    cout << "Name: " << StdNm<< endl;
    cout << "Grade 1: " << Grd1 << endl;
    count ++;
    cout << "Grade 2: " << Grd2 << endl;
    count ++;
}
    cout << sum << count << endl;
    cout << "Total: " << sum << endl;
    avg = sum/count;
    cout << "Avarage: " << avg << endl;
}