#include "student.hpp"

using namespace std;

int main()

{

    Student obj1, obj2;
    obj1.inputClass();//get input
    cout << "Student A information: " << endl;
    obj1.printAll(); //student A

    obj2 = obj1; //A = B

    cout << "Student B information after assignment:" << endl;
    obj2.printAll(); //B same as A

    obj1.resetClass(); //clear the classes

    cout << "Student A information after clearing:" << endl;
    obj1.printAll(); //no classes

    cout << "Student B information: " << endl;
    obj2.printAll(); //same as A before clearing

}
/* Similar to assignment 6 and 7 we had to create a makefile with functions and all.
The new part was the copy of the constructer and the destruction of the parameter at the end.
In line 20-25 in the student.cpp we implemented the destructer but setting all the info back to 0 or empty.
I added *this in line 38 in student.cpp because it would ensure that the the object would be retunred.
*/