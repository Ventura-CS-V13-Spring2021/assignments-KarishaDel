#include    <iostream>
using namespace std;

int main()
{
    const int SIZE=10;
    int     numbers[10] = {5, 10, 75, 80, 25, 55, 95, 70, 60, 15};
    int     diff[10];
    int     sum=0;

    for(int i = 0; i < SIZE; i++) //to print the array
    cout << numbers[i] << endl;

    for(int i=0; i < SIZE; i++) //to add the entire array together
    {
        sum += numbers[i];
    }
    cout << "Summations of Array: " << sum << endl; //to print out total

    for(int i = 0; i < SIZE; i++) //to add the new values of the diff[] array
    {
        diff[i] = 490 - numbers[i];
        cout << diff[i] << endl;
    }
}
/* After watching all the videos I was able to figure this one out fairly quickly.
By creating a new for loop I was able to assing the results from 490 - number to diff.
then print.*/