#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int randum;
    int min = 100, max=0;

    srand(time(0));
    for (int i; i < 5; i++)
    {
       randum = rand() % 100;  
       cout << randum << endl;
    }
    do
    {
        if(randum > max);
        {
            max = randum;
                cout << "Max: " << max << endl;
        }
       
    if(randum < min);
        {
            min = randum;
            cout << "Min: " << min << endl;
        }
    } while(randum < 5);
    


   
    
     
}