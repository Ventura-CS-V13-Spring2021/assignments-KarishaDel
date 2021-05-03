#include <iostream>
#include "IntegerArray.hpp"
using namespace std;


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
/*
EXPLENATION
I decided to use the algorithm library to sort the numbers. It was much cleaner and less work. 
1 : I created the three files and a test file. the test file helped in making sure my 
program ran correctly before I populated the other 3 files. It’s easier to find mistakes when there is only one .cpp to work with.
2 : In the .hpp file I created the class and assigned all the functions to public so I could use them throughout the program.
The items in private I did not want to accidentally change them in the program.
3 : In the IntegerArray.cpp is where I created the functions. In the sortArray function I was trying to use the while loop and my program got stuck in an infinite loop.
I switched to if statements and it worked very well. */ 



