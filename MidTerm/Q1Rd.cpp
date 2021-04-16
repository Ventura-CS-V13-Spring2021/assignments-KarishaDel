#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream ifs;
    string StdNm;
    int Grd1;
    int Grd2;
    int NumStd;
    double sum = 0.0;
    float avg;
    int beat = 80;


    ifs.open("Student.txt");

    while (ifs >> StdNm >> Grd1 >> Grd2)
    {
        sum = Grd1 + Grd2;
        avg = sum / 2;

        if (avg > beat)
        {
            cout << "Name: " << StdNm << endl;
            cout << "Grade 1: " << Grd1 << endl;
            cout << "Grade 2: " << Grd2 << endl;
            cout << "Avarage: " << avg << endl;
        }
    }
}
// I used the while staement to run all the lines in the file into my program allowing the program to add variable to the values.
//Then i added each grade and got the avg. I used the avg as a perameter to ensure anly the students with avg above 80 where displayed.
