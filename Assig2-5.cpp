#include <iostream>
#include <iomanip>  
using namespace std;

int main()
{
	int range1, range2 ;
	bool done {false}; //flag called done and we initilize it to false so its not done
	int i;
	
	while (!done) //the loop will run until bool is true and whole range has been tested
	{
		cout << "Type a range of integers to test for prime numbers: " << endl;
		cin >> range1 >> range2;
		for (int num = range1; num <= range2; num++) //to ensure all numbers in the range are tested
		{
			for (i = 2; i < num; i++) //prime numbers will be tested against all numbers less than itself with a min of 2
			{
				if (num % i == 0) //checks all the numbers less than num 
					break;
			}
			if (i == num)
				cout << num << " is a prime number."<< endl;
			else
			{
				cout << num << " is not a prime number." << endl;
				done = true;
			}
		
		}

	}
}
	

