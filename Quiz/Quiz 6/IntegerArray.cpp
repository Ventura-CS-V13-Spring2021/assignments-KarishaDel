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

void sortArray(int flag)
{
    while (flag == 0)
    {
        
    }
}

void getPrimenumbers(void)
{

}

