//Make a program that determines whether all elements are in sorted order

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void makearray(double n[], int N);
void printarray(double n[], int N);
int outOfOrder(double n[], int N);

int main()
{
    const int N = 10;
    double number[N];
    int ret;

    srand(time(0));
    makearray(number, N);
    printarray(number, N);

    ret = outOfOrder(number, N);
    cout << "Return: " << ret << endl;

}    
void makearray(double n[], int N)
{
    int i;
    for(int i = 0; i < N; i++)
    {
        n[i] = (double)rand()/RAND_MAX * 100;
    }
}

void printarray(double n[], int N)
{
    for (int i=0; i < N; i++)
    {
        cout << n[i] << "\t";
    }
    cout << endl;
}

int outOfOrder(double n[], int N)
{
    int ret;

    for(int i=0; i < N; i++)
    {
        if (n[i] < n[i +1])
        {
            if (n[i] < n[i +1])
            {
                ret = n[i];
                break;
            }
            ret = -1;    
        }

    }
     return ret;
}