#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;
int FindMin(int, int, int);
int FindMax(int, int, int);
int FindDif (int, int);
int getRnd ();
void fileWrt (ofstream &, int, int, int, int, int, int);

int main()
{
    int N = 3;
    int num, num1, num2, num3;
    int min;
    int max;
    int dif;

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
        max = FindMax(num1,num2,num3);
        dif = FindDif(min,max);
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

int FindMin (int num1, int num2, int num3)
{
    int min;
    
    if(num1 > num2)
    min = num2;
    else
    {
        min = num1;
    }
    if (num1 > num3)
    min = num3;
    else
    {
        min = num1;
    }
    if(num2 > num3)
    min = num3;
    else
    {
        min = num2;
    }   

    return min;
}

int FindMax (int num1, int num2, int num3)
{
    
    int max;
    
    if(num1 < num2)
    max = num2;
    else
    {
        max = num1;
    }
    if (num1 < num3)
    max = num3;
    else
    {
        max = num1;
    }
    if(num2 < num3)
    max = num3;
    else
    {
        max = num2;
    }   

    return max;

}
int FindDif (int min, int max)
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

