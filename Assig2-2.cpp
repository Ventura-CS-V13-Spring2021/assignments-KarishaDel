#include <iostream>
using namespace std;
int main()
{
    int number1, number2, number3;
    
    cout << "Enter three integer values : " ;
    cin >> number1 >> number2 >> number3 ;
    
    if (number1 != number2 && number2 != number3 && number1 != number3)
        {
            cout << "All numbers are different." << endl;
        }

    else if (number1 == number2 && number1 == number3)
        {
            cout << "All numbers are the same." << endl;
        }
        
    else
      cout << "There are two duplicate numbers." << endl;          
    
    return 0;
}