#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;
int FindMin(int);
int getRnd ();

int main()
{
    int N = 3;
    
    ofstream NTFile;
    NTFile.open("Three.txt");
    if (NTFile.fail())
    {
        cerr << "Error.";
        exit(0);
    }

    srand(time(0));
    for (int i; i < N; i++)
    {
        int num = getRnd();
        NTFile << num << endl;
    }
        
    NTFile.close();
} 


int getRnd()//maybe void? 
{
   int num;
   num = rand() % 10 + (0);
    cout << num << endl;
   return num;
} 
int findMin (int)
{
    
}