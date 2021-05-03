#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    ifstream ifs;
    int empID;
    string emNM;
    string emDP;
    double salary;
    double sum = 0.0;
    int count = 0; 
    float avg;

    ifs.open("EmployeeRecord.txt");

while(ifs >> empID >> emNM >> emDP >> salary)
{
    count++; 
    sum += salary;
    cout << "ID: " << empID<< endl;
    cout << "Name: " << emNM << endl;
    cout << "Department: " << emDP << endl;
    cout << "Salary: " << salary << endl;

}          
    cout << "Total: " << sum << endl;
    cout << count << endl;
    avg = sum/count;
    cout << "Avarage: " << avg << endl;
}
/* Answer to question 8.
First I had to ensure that the input ofstream file was correct. I created variables which I then put into a for loop. 
While in the loop I had the responses given by the users put into the variables. 
After each input I stored the value in ERfile. 
Once all the input was given and stored in ERfile the program then created the EmployeeRecord.txt file. 
Second was to read the file. 
This was tricky since I wasn’t sure how to set up the loop without getting an infinite response which cause several crashes of my VS code. 
I tried using doWhile loops and even the .eof that worked for me before but since I had both numbers and characters that did not work. 
I then figured out that I could just type in all the variables I need into 
a while loop so the program will continue to run until it exhausted all of the input from the text file. 
Once I got that done the sum and average was simple. The information is pulled from the text file by ‘.open(“filename”);’ then stored in the provided variables.
I ran into many errors. MOstly infinite loops since I could fifure out how to
close the loop. I coundnt get the while loop to put out the information for more than one person. Then I couldnt get the sum to only display at the end and not between each one.*/
 