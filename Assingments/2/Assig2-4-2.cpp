#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  int rdnum;//store the numbers from the file
  int count=0, sum=0, min=100, max=0;
//100 is the max so all numbers will be under 100 for the min
  float avg;
  ifstream rdfile("rdnum.txt");
  rdfile>>rdnum; //storing the numbers from the file

  while(!rdfile.eof())//.eof meant End of File. This will allow the program to run until the end of the file
   {
        count++;
        sum += rdnum;
        if(rdnum>max) //this will store each number into max if its greater than the last
          max=rdnum;
        if(rdnum<min) // this will store each number into min if its smaller than the last
          min=rdnum;
     rdfile>>rdnum;        
   }
        rdfile.close();
  //out put must be out the loop as to only display the final values      
  cout<<"Total Number of Integers read are: "<<count<<endl;
  cout<<"Minimum value is: "<<min<<endl;
  cout<<"Maximum value is: "<<max<<endl;
  cout<<"Sum of all integers is:"<<sum<<endl;
  avg=sum/count; //only need to run this once so it can be outside the loop
    cout<<"Average is: "<<avg<<endl;