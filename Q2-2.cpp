#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int randum;
    int min = 100, max=0;
    int num;

    srand(time(0));
    for (int i; i < 5; i++)
    {
       randum = rand() % 100;  
       cout << randum << endl;               
    }

    do
    {
       if(randum>max) 
        max=randum;
       if(randum<min) 
        min=randum;
    } while (/* condition */);
    



cout << max;
cout << min;
   
    
     
}