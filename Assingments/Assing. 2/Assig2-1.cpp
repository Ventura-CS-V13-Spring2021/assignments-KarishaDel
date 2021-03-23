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

        else
        {
            if(number1 > number2 && number1 > number3)
            {
                cout << number1 << " is the greater number.";
            } 

            if(number2 > number1 && number2 > number3)
            {
                cout << number2 << " is the greater number.";
            } 

            else if(number3 > number2 && number3 > number1)
            {
                cout << number3 << " is the greater number.";
            }
        }    
   
     return 0;
}