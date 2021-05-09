#include "rectangle.hpp"
#include "coordinate.hpp"

int main()
{
    Coordinate lbval(0.0, 0.0);
    Coordinate rtval(10.0, 10.0);
    Rectangle r1(lbval, rtval);

    r1.printRectangle();

    lbval.setXY(-20.0, -20.0);
    rtval.setXY(20.0, 20.0);
    r1.setLBRT(lbval, rtval);
    r1.printRectangle();
}
/* 1st try. The top right is supposed to be 10 not 0. Fixed- i had to change lines 14 so it pulls info from line 37 in rectangle.cpp 
Question 1 answer: I created 6 separate files. The two .hpp contained the classes, two of the cpp had the functions for each object in each class,
one was the main file which had the print statement and the Makefile that allows me to build all 5 files at once. The coordinate.hpp I initialized the x and y values to 0 and 
commented out line 6 - 9 in the cpp file since it was causing an error during build since it was stated twice. The rectangle.hpp I didn’t change since the information was pulled from
the coordinate.hpp file. I did initialize coor x and coor y along with the setLBRT(x,y) so both classes could communicate in this file. The center was tricky, 
I kept getting an error line under 45 and 46 in rectangle.cpp becasue I wasn't using the .getXY(). This is the only way for the variable ct_x and ct_y to get the numbers from
the rest of the functions.  

*/