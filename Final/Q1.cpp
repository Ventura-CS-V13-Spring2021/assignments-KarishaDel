/* 
You are given an array of integers that has the N positive integer elements with increasing sorted order. 
Find the element that has the greatest number of divisible elements(the number of factors in the array). For example,
*/

#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int getNumDiv(int a[], int div, int length); //needed the N for the lenght of the array, div will be the devider


int main()
{
    //const int N = 6; //dont need since the length is hard coded into the array
    int a[6] = {1, 2, 4, 6, 10, 24};
    int length = sizeof(a)/sizeof(a[0]); //get the length
    int max = 0;
    int num;
    int div;
    int ph; //place holder for index spot

    cout << "Number List: \n"; //print the array
    for(int i = 0; i < length; i++)
    {
        cout << a[i] << " ";
    }

    for (int i = 0; i < length; i++)
    {
        num=getNumDiv( a, a[i], length); //DONT HAVE SPACES IN THE FUNCTION CALL

        if(i==0)
        {
            max = num;
            ph = i;
        }
        else if(max < num)
        {
            max = num;
            ph = i;
        }

    }
    cout << "Most Factors: " << a[ph] << "\nHow many factors: "<< max;

}

int getNumDiv(int a[], int div, int length)
{
    int count = 0; 

    for (int i = 0; i < length; i++) // to loop thru the array
    {
        if(div % a[i] == 0)
        count++;
    }
    return count-1; //too long by 1
}


