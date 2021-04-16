#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;
int FindMin(int, int, int);
int FindMax(int);
int getRnd ();
void fileWrt (ofstream &, int, int, int, int);

int main()
{
    int N = 3;
    int num, num1, num2, num3;
    int min;

    ofstream NTFile;
    NTFile.open("Three.txt");
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
        min = FindMin(num1,num2,num3);
        fileWrt(NTFile, num1, num2, num3, min);
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

int FindMin (int num1, int num2, int num3)
{
    int min;
    min = num1;
    if(min > num2)
    {
        num2 = min;
        return min;
    }
    else if (min > num3)
    {
        num3 = min;
        return min;
    }
    else
    {
        return min;
    }   
                        
}

// int FindMax (int)
// {

// }

void fileWrt(ofstream &NTFile, int num1, int num2, int num3, int min)
{
    NTFile << min << endl;
    NTFile << num1 << endl;
    NTFile << num2 << endl;
    NTFile << num3 << endl;


}

