#include <iostream>
#include <iomanip>  
using namespace std;

int main()
{
	int range1, range2 ;
	bool done {false};
	int i;
	
	while (!done) 
	{
		cout << "Type a range of integers to test for prime numbers: " << endl;
		cin >> range1 >> range2;
		for (int num = range1; num <= range2; num++) 
		{
			for (i = 2; i < num; i++) 
			{
				if (num % i == 0) 
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