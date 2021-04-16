#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;
int isGreater(int);
int getRnd ();

int main()
{
    int N = 10;
    int min = 1;
    int max = 50;

    ofstream NFile;
    NFile.open("Numbers.txt");
    if (NFile.fail())
    {
        cerr << "Error.";
        exit(0);
    }

    for (int i = 0; i < N; i++)
    {
        int num = getRnd();
    }
    NFile.close();
} 

int isGreater()
{

}
int getRnd()//maybe void? 
{
   int randum;
   randum = rand() % 50;
} 


