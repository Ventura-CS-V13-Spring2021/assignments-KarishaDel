#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

	int rdnum;
	int N;
	ofstream 	rdfile;

	rdfile.open("rdnum.txt");

	cout << "Enter the number of random numbers \n";
    cin >> N;

	srand(time(0));
	for(int i; i<N; i++)
	{
		rdnum = rand() % 100;
		rdfile << rdnum << endl;
	}

	rdfile.close();

}