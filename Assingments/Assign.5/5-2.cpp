//Min and max

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void makearray (int n[], int);
void print (int [], int);
void minmax (int[], int);


int main()
{
    const int N = 10;
    int number[N];

    
    srand(time(0));    
    makearray(number, N);
    print (number, N);
    minmax(number, N);
    
}
void makearray (int num[], int N)
{
    int i;

    for (int i =0; i < N; i++)
    {
        num[i] = rand()%100;
    }
   
}

void print(int num[], int N)
{
    for (int i = 0; i < N; i++)
    cout << num[i] << "\t";
}

void minmax(int n[], int N)
{
    int min, max;
    min = max = n[N];

    for(int i =0; i < N; i++)
    {
        if (min > n[i])
        min = n[i];
        if (max < n[i])
        max = n[i];
    }    

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
}
//i cant seem to make the min and max retain the number