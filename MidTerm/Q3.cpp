#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;
int FindMin(int);
int getRnd ();
void fileWrt (ofstream &, int, int, int);

int main()
{
    int N = 3;
    int num;

    ofstream NTFile;
    NTFile.open("Three.txt");
    if (NTFile.fail())
    {
        cerr << "Error.";
        exit(0);
    }

    srand(time(0));
    while(1)
    {
        num = getRnd();
        // if(FindMin (num))
        fileWrt(NTFile, num);
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

// int FindMin (int num)
// {
//     static int MinNum = 0;
    
//     if (MinNum < num)
//     {
//         num = MinNum;
//         return num;
//     }
//     else
//     {
//         MinNum = num;
//         return 0;
//     }
// }
void fileWrt(ofstream &NTFile, int num)
{
     NTFile << num << endl;
}