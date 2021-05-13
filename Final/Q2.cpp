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
    int count = 1; // since it started at 0 but we need it to strat at 1


    sort(a, a + length, greater<int>()); //sort with algotithm
    for(int i = 0; i < length; i++)
    {
        cout << setw(2) << a[i] << "\n";
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


}
/*I first tried to use the N const but noticed that we had to keep the array flexible.
the count kept starting at 0 so i had it start at 1.
I used the sort algo to sort the array then a for loop to compare each element of the array to the next and find all the duplicates.
I used the else statement and set count to 1 becasue that meants that it went thru the loop and didnt find any 
duplicates. I am still working on the distance part. */