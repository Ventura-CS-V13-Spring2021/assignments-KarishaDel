/* 
You are given an array of integers that has the N positive integer elements with increasing sorted order. 
Find the element that has the greatest number of divisible elements(the number of factors in the array). For example,
*/

#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int getNumDiv(int div, int a[], int N); //needed the N for the lenght of the array, div will be the devider
void max(int N, int a[]);
// void sortAcs(int a[], int length);

int main()
{
    const int N = 6;
    int a[N] = {5,6,24,22,8,100};
    int length = sizeof(a)/sizeof(a[0]); //get the length

    cout << "Number List: \n"; //print the array
    for(int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }

    max(N, a);
    // sortAcs(a, length);

}

int getNumDiv(int div, int a[], int N)
{
    int i; 

    for (int i = 0; i < N; i++) // to loop thru the array
    {
        if(div % a[i] == 0)
        i++;
    }
    return i;
}

void max(int N, int a[])
{
    int num;
    num = a[N];

    for (int i = 0; i < N; i++)
    {
        if (num < a[i])
        num = a[i];
    }
    cout << "Max in list: " << num << endl;
}

// void sortAsc(int a[] , int length )
// {
//     sort(a , a + length);
// }