/* 
You are given an array of integers that has the N positive integer elements with increasing sorted order. 
Find the element that has the greatest number of divisible elements(the number of factors in the array). For example,
*/

#include <iostream>
#include <iomanip>

using namespace std;

int getNumDiv(int num, int a[], int N); //needed the N for the lenght of the array, num will be the devider

int main()
{
    const int N = 6;
    int a[N] = {5,6,24,22,8,100};

    cout << "Number List: \n";
    

}

int getNumDiv(int num, int a[], int N)
{
    int i;

    for (int i = 0; i < N; i++) // to loop thru the array
    {
        if(num % a[i] == 0)
        i++;
    }
    return i;
}