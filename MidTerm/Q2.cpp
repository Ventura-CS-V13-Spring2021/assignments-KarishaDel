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

    srand(time(0));
    for (int i; i < N; i++)
    {
        int num = getRnd();
        if(isGreater(num))

        NFile << num << endl;
    }
        


    NFile.close();
} 

int getRnd()//maybe void? 
{
   int num;
   num = rand() % 50;

   return num;
} 

int isGreater(int num)
{
    static int preceding = 0;

    for (preceding < num)
    {
        preceding = num;
        max == num;
    }
    return num;
}

