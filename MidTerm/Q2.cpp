#include <iostream>
#include <fstream>

using namespace std;

int main()
{


    ofstream NFile;
    NFile.open("Numbers.txt");
    if (NFile.fail())
    {
        cerr << "Error.";
        exit(0);
    }


    NFile.close();

   
} 
