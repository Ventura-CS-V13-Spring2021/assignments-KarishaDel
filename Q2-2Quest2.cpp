#include <iostream>
using namespace std;

int main()
{
    int number1, number2, number3;

     cout << "Enter three integer values : " ;
     cin >> number1 >> number2 >> number3 ;

        if (number1 == number2 || number1 == number3 || number2 == number3)
        {
            cout << "No equal numbers.";
        } 
