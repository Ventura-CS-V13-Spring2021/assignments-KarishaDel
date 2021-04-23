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
{ //try to remove duplicates
   int i, j, k;
   int match = 0;


    for(int i=0; i< size1; i++)
        for(j= i+1; j < size1;)
        {
            if(num1[i] == num1[j])
            {
                for (k = j; k < size1; ++k)
                num1[k] = num1[k+1];
                --size1;
            }
            else
            {
                j++;
            }
        }


   for(int i = 0; i < size1; i++)
    {
        for(int j = 0; j < size2; j++)
        {
            if (num2[i] == num1[j])
            {
                match++;
                break;
            }
        }
    }
   
    cout << " Matches: " << match << endl;
}    
/* I am currently having trouble counting each individual match. I can display all the 
duplicates but I can't seem to find a way to display the TOTAL amount of duplicates--FIXED
I had to move my cout statmenet. 

Now I can't seem to get it to count EACH match only once.---FIXED
Alright! I came up with the plan to try an remove the duplicates before checking for matches.
1st loop- open the array
2nd loop- make another varaible so we can compare within the same array. in the if statement checked to see if they are the same 
3rd loop- we had start removing the duplicates so I made another varaible and set it equal to j inorder to remove it. 
*/