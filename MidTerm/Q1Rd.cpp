#include <iostream>
#include <fstream>
using namespace std;

string comp (int, float);
int main ()
{
    ifstream ifs;
    string StdNm;
    int Grd1;
    int Grd2;
    int NumStd;
    double sum = 0.0;
    float avg;
    int beat = 80;
    string result;

    ifs.open("Student.txt");

while(ifs >> StdNm >> Grd1 >> Grd2)
{
    sum = Grd1 + Grd2;
    cout << "Name: " << StdNm<< endl;
    cout << "Grade 1: " << Grd1 << endl;
    cout << "Grade 2: " << Grd2 << endl;
    avg = sum/2;
    cout << "Avarage: " << avg << endl;    
}

while(1)
{
    result = comp(beat, avg);
 
}

string comp(int , float)
{
    int beat = 80;
    float avg;

    if (beat < avg)
    cout << StdNm;
}

}