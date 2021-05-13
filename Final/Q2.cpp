/* 
Write a program that reads in an array of type int. You may assume that there are fewer than 20 entries in the array.
*/
#include <iostream>
#include <iomanip>
#include <algorithm>


using namespace std;

int main()
{
    int a[] = {-10, 10, 1, 2, 5, -13, 12, 15, -6, 10, 2, 5};
    int length= sizeof(a)/sizeof(a[0]); //cant use const becasue the size can change
    int count =;


    sort(a, a + length, greater<int>()); //sort with algotithm
    for(int i = 0; i < length; i++)
    {
        cout << a[i] << " ";
    }
     cout << endl;

//count copies
    for(int i = 0; i < length-1; i++)
    {
        if (a[i] == a[i+1])
        {
            count++;
        }
        else
        {
            cout << a[i] << " there is: " << count << endl;
            count = 1;
        }
    }
        cout << a[length] << count <<endl;

}