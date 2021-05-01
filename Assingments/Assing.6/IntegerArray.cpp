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
int IntegerArray::getLastelm(void) const
{
    return numbers[10];
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
    // srand(time(0));
    for (int i =0; i < N; i++)
    {
        numbers[i] = rand()%100;   
        length = N;
    }

}
void IntegerArray::sortAsc()
{
    sort(numbers, numbers + length); //length will sort only the filled elements vs N would sort all
}
void IntegerArray::removeLastelm(void)
{
    if(length == 0) //if empty nothing happens
        return;
    else //if return statement is used we dont need else.
        length = length - 1;
    
}
void IntegerArray::appendElement(int v)
{
    if(length == N)
        return;
    numbers[length] = v;
    length += 1; //the 100 will be inserted on the 9th index
}