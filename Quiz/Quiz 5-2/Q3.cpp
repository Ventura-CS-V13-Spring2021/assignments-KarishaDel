#include    <iostream>
#include    <cstdlib>
#include    <ctime>

using namespace std;
void makebinary(int [], int);
void printbinary(int [], int);
void count0cluster(int [], int);
int main()
{
    const int SIZE = 20;
    int     binary[SIZE];

    srand(time(0));
    makebinary(binary, SIZE);
    printbinary(binary, SIZE);
    count0cluster(binary, SIZE);
}
void makebinary(int num[], int size)
{
    for(int i=0;i<size; i++)
        num[i] = rand() % 2;
}
void printbinary(int num[], int size)
{
    for(int i=0;i<size; i++)
        cout << num[i] << " ";
    cout << endl;
}
void count0cluster(int bin[], int size)
{
    int count = 0; 
   
    if (bin[0] == 0) //it kept skipping the first 0
        count++;
    
    for (int i = 1; i < size; ++i)
    {
        if(bin[i] == 0 && bin[i-1] != 0)
        count++;
    }    
  cout << count << endl;
}
/* I used a forloop for this one. I also used the && statements bc we had to make sure that
that we didnt count ALL the 0 in the array.
the if statement was added in last since i kept skipping the first 0 so i had one
less cluster. I also added in the two libraries to make the randum generator work.*/