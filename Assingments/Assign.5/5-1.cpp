#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void makearray (int n[], int);
void print (int [], int);
int calc (int[], int, int);

int main()
{
    const int N = 10;
    int number[N];
    int averg;
    int avg;
    
    srand(time(0));    
    makearray(number, N);
    print (number, N);
    averg = calc(number, N, avg);
}
void makearray (int n[], int N)
{
    int i;

    for (int i =0; i < N; i++)
    {
        n[i] = rand()%100;
    }
   
}

void print(int n[], int N)
{
    for (int i = 0; i < N; i++)
    cout << n[i] << "\t";
}

int calc(int n[], int N, int)
{
    int avg;
    int sum;

    for (int i=0; i < N; i++)
    {
    
        sum += n[i];
    }
    
    avg = sum/N;
    cout << sum << endl;
    cout << avg << endl;
    return avg;     
}
//Professor. When its time to do my sums it add 10 to the result. I dont know where it is coming from.