/* In order to drive the classes and test the member functions, 
we are going to make the main function as follows:
*/
#include "student.hpp"

int main()
{
   DOB student_dob(12, 24, 2000);
   student_dob.printDate();
   Address student_address("4667 Telegraph Road", "CA", 93003);
   student_address.printAddress();
    
    Student s;
    s = Student("Johns", 9001001, student_dob, student_address);
    s.printStudent();
    
   Student s1("Johns", 9001001, student_dob, student_address);
   s1.printStudent();
   DOB newdob = s1.getDOB();
   newdob.setYear(2020);
   s1.setDOB(newdob);
   s1.printStudent();

   student_dob.setDOB(1, 1, 2020);
   student_address.setAddress("1000 Grand ave", "CA", 90001);
   s1.setDOB(student_dob);
   s1.setAddress(student_address);
   s1.printStudent();
}