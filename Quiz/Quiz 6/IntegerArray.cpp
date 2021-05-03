#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include "IntegerArray.hpp"
using namespace std;

int IntegerArray::getLength(void) const
{
    return length;
}

void IntegerArray::printAll(void) const
{
    for (int i = 0; i < length; i++)
        cout << numbers[i] << "\t";
    cout << endl;
}

void IntegerArray::fillUp(void)
{
    int i;

    for (int i =0; i < N; i++)
    {
        numbers[i] = rand()%100;   
        length = N;
    }

}

void IntegerArray::sortArray(int flag)
{

    if(flag == 0)
    {
        sort(numbers, numbers + length); //sort does acending be default so no change is needed
    }

    if(flag == 1)
    {
        sort(numbers, numbers + length, greater<int>()); //puts the larger element before
    }    
}
//had to use an if statement!

void IntegerArray::getPrimenumbers(void) const
{
    int j, a;
    int count = 0;

    for( int i = 0; i < length; i++)
    {
        j = 2;
        a = 1;
        while(j<numbers[i])
        {
            if(numbers[i] % j == 0)
            {
                a = 0;
                break;
            }
            j++;
        }    
        if(a == 1)
        count ++;
        //cout to print prime numbers
    }
    cout << count << " ";
}

