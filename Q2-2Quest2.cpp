#include <iostream>
using namespace std;

int main()
{
    int number1, number2, number3;

     cout << "Enter three integer values : " ;
     cin >> number1 >> number2 >> number3 ;

        if(number1 == number2)
        {
            cout << number1 << " and " << number2;
        } 

        if(number2 == number3)
        {
            cout << number2 << " and " << number3;
        } 

        if(number3 == number1)
        {
            cout << number3 << " and " << number1;
        }

        
        {
            cout << "None are equal.";
        }
     return 0;
}