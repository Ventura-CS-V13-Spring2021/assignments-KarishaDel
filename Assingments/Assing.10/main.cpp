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