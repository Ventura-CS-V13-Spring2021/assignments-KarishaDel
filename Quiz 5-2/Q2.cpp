#include    <iostream>
#include    <cstdlib>
#include    <ctime>
using namespace std;
void makearray(int [], int);
void printarray(int [], int);
void findmatchnum(int [], int, int [], int);
int main()
{
    const   int SIZE1 = 10;
    const   int SIZE2 = 5;
    int     num1[SIZE1];
    int     num2[SIZE2];

    srand(time(0));
    makearray(num1, SIZE1);
    printarray(num1, SIZE1);
    makearray(num2, SIZE2);
    printarray(num2, SIZE2);
    findmatchnum(num1,SIZE1, num2, SIZE2);
}
void makearray(int num[], int size)
{
    for(int i=0;i<size; i++)
        num[i] = rand() % 10;
}
void printarray(int num[], int size)
{
    for(int i=0;i<size; i++)
        cout << num[i] << "\t";
    cout << endl;
}
void findmatchnum(int num1[], int size1, int num2[], int size2)
{
    int i,j;
    int count=0;
    int match;

    for(int i = 0; i < size1; i++)
    {
        for(int j = 0; j < size2; j++)
        {
            if (num2[i] == num1[j])
            {
                num2[i] != 
                count++;
                break;
            }
        }
    }
   
    cout << " - " << count << endl;
}    
/* I am currently having trouble counting each individual match. I can display all the 
duplicates but I can't seem to find a way to display the TOTAL amount of duplicates
*/