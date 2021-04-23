#include <iostream>
#include <iomanip>
using namespace std;

void sum2dbyrow(int [], int [][5], int, int);
int findMaxsum (int []);

int main()
{
    const int NUM_ROWS = 6;
    const int NUM_COLS = 5;
    int result;
    int sum[NUM_ROWS] {0}; 
    int numbers[NUM_ROWS][NUM_COLS] {
                                        {2, 7, 9, 6, 4},
										{6, 1, 8, 8, 4},
										{4, 3, 7, 2, 9},
										{9, 9, 0, 3, 1},
										{6, 2, 7, 4, 1},
                                        {1, 2, 1, 2, 3}
                                    };
    sum2dbyrow(sum, numbers, NUM_ROWS, NUM_COLS);
    for(int i=0; i<NUM_ROWS; i++)
    cout << "Total sum of row: "<< i << " is: " << setw(5) << sum[i] << endl;

    result = findMaxsum(sum);
    cout << "Result: " << result;
}    

void sum2dbyrow(int sum[], int num[][5], int rows, int cols)
{

    for(int i=0; i < rows; ++i) 
    {
        for(int j=0; j < cols; j++) 
        {
            sum[i] += num[i][j];
        }
    }
}                  
int findMaxsum(int n[])
{
    int result;
    int max;

    for(int i=0; i < 6; i++)
    {
        if(n[i] > n[i+1])
        {
            cout << n[i] << endl;
            result = n[i];
        }   

    }
    return result;
}                 
//cant get the max value to stay in n[i].