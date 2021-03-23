#include <iostream>
using namespace std;

int main()
{
    int number1, number2, number3;
    const int min{0};
    const int max {99};

     cout << "Enter three integer values from 0 to 99: " ;
     cin >> number1 >> number2 >> number3 ;
    if (number1< min || number2 < min || number3 < min  || number1> max || number2 < max || number3 > max)
    cout<< "Try again"<< endl;


    else
    {
        if (number1 != number2 && number1 != number3 && number2 != number3)
            cout << "No equal numbers."; 

        else if(number1 == number2)
         cout << number1 << " = " << number2 << endl;

        else if(number2 == number3)
         cout << number2 << " = " << number3 << endl; 

        else if(number1 == number3)
         cout << number1 << " = " << number3 << endl;
    }

     return 0;
}