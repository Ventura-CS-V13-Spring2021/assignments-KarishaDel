#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

class IntegerArray
{
    private:

        static const int N = 10;
        int numbers[N];
        int length = 0;

    public:

        int getLength(void) const;
        void printAll(void) const;
        void fillUp(void);
        void sortArray(int flag);
        void getPrimenumbers(void) const;

};
//------------------------------------------------------------
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
    int j, num;

    for( int i = 0; i < length; i++)
    {
        for(j = 2; j < numbers[i]; j++)
        {
            if (numbers[i]%j == 0) 
            break;
        }
        if(i == )
        //cout to print prime numbers
    }
}
//-------------------------------------------------------------------
int main()

{
    IntegerArray N;

    N.fillUp();
    N.printAll();
    cout << "Current length is " << N.getLength() << endl;

    cout << "After sorting with ascending order : \n ";
    N.sortArray(0);
    N.printAll();

    cout << "After sorting with descending order: \n ";
    N.sortArray(1);
    N.printAll();

    cout << "The number of prime numbers " << endl;
    N.getPrimenumbers();
    
} 