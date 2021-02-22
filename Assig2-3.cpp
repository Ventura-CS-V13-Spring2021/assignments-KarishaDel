#include <iostream>
using namespace std;
int main()
{
    char  selection;
    cout << "Enter your choice among A, B or C for a small treat\n";
    cin >> selection;
    // if (selection == 'A' || selection == 'a')
    //      cout << "Your choice is A\n";
    // else if (selection == 'B' || selection == 'b')
    //     cout << "Your choice is B\n";
    // else if (selection == 'C' || selection == 'c')
    //      cout << "Your choice is C\n";
    // else
    // cout << "Not good choice\n";
    
    switch (selection)
    {
        case 'A':
        case 'a':
            cout << "A. Flamingos are white at birth.\n";
        break;
    
        case 'B':
        case 'b':
            cout << "B. You should buy your dog blue toys. They can see it better on the grass.\n";
        break;
    
        case 'C':
        case 'c':
            cout << "C. Humming birds can fly backwards.\n";
        break;
            
        default:
            cout << "That was not an option. No treat for you.\n";
        break;
    }
      return 0;
}