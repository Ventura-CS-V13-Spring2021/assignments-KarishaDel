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
    cout << num << endl;
   return num;
} 

int isGreater(int num)
{
    static int preceding = 0;

    if (preceding < num)
    {
        preceding = num;
        return num;
    }
    else
    {
        preceding = num;
        return 0;
    }

}

/* First I created the number generator using the libraries. I created two functions one to get the randum number then one to compare
the numbers to its preciding number. A problem I ran into to that it was not giving me a steady increasing number line. I was getting
36, 32, 16 then 37. I kept getting the first number included in the list. 