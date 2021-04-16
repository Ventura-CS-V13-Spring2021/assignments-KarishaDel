#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;
int FindMin(int, int, int);
int FindMax(int, int, int);
int FindDif(int, int);
int getRnd();
void fileWrt(ofstream &, int, int, int, int, int, int);

int main()
{
    int num, num1, num2, num3;
    int min;
    int max;
    int dif;

    ofstream NTFile;
    NTFile.open("Question3.txt");
    if (NTFile.fail())
    {
        cerr << "Error.";
        exit(0);
    }

    srand(time(0));
    {
        num1 = getRnd();
        num2 = getRnd();
        num3 = getRnd();
        min = FindMin(num1, num2, num3);
        max = FindMax(num1, num2, num3);
        dif = FindDif(min, max);
        fileWrt(NTFile, num1, num2, num3, min, max, dif);
    }

    NTFile.close();
}

int getRnd()
{
    int num;
    num = rand() % 9;
    cout << num << endl;
    return num;
}

int FindMin(int num1, int num2, int num3)
{
    int min;
    min = num1;
    if (min > num2)
        min = num2;
    if (min > num3)
        min = num3;
    return min;


    return min;
}

int FindMax(int num1, int num2, int num3)
{

    int max;

    max = num1;
    if (max < num2)
        max = num2;
    if (max < num3)
        max = num3;
    return max;

}
int FindDif(int min, int max)
{
    int dif;
    dif = max - min;
    return dif;
}

void fileWrt(ofstream &NTFile, int num1, int num2, int num3, int min, int max, int dif)
{
    NTFile << num1 << endl;
    NTFile << num2 << endl;
    NTFile << num3 << endl;
    NTFile << "Min: " << min << endl;
    NTFile << "Max: " << max << endl;
    NTFile << "Difference: " << dif << endl;
}

/* I created 5 functions for this program. For the min and max I used if statements to compare all three randum numbers.
I had to make three variables to hold the numbers inorder to compare them in my functions. Problems I ran into was my
if statemnst werent going thru the whole list to check. By shortening the code I was able to see where the mistake was. My num1 wasnt 
being saved into the min or the max so the program would automataclly skip it every time.*/ 
