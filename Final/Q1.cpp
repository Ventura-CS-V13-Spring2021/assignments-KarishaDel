/* 
You are given an array of integers that has the N positive integer elements with increasing sorted order. 
Find the element that has the greatest number of divisible elements(the number of factors in the array). For example,
*/

#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int getNumDiv(int a[], int div, int N); //needed the N for the lenght of the array, div will be the devider


int main()
{
    const int N = 6;
    int a[N] = {5,6,4,8,9,24};
    // int length = sizeof(a)/sizeof(a[0]); //get the length
    int max = 0;
    int num;
    int div;

    cout << "Number List: \n"; //print the array
    for(int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }

    for (int i = 0; i < N; i++)
    {
        num = getNumDiv( a, div, N);

        if(i==0)
        {
            max = num;
        }
        else if(max < num)
        {
            max = num;
        }

    }
    cout << "Most Factors: " << max;

}

int getNumDiv(int a[], int div, int N)
{
    int i; 

    for (int i = 0; i < N; i++) // to loop thru the array
    {
        if(div % a[i] == 0)
        i++;
    }
    return i;
}

