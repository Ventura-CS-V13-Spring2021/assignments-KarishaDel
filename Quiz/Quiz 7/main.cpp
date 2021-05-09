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
Question 1 answer: I created 6 seperate files. The two .hpp contaied the classes, two of the cpp had the functions for each object in each class,
one was the main file which had the print statement and the Makefile taht allows me to build all 5 files at once. The coordinate.hpp i initilized the x and y values to 0 and 
commented out line 6 - 9 in the cpp file since it was causing an error during build since it was stated twice. The rectangle.hpp I didnt change since the information was pulled from
the coordinate.hpp file. I did initilize coor x and coor y along with the setLBRT(x,y) so both classes could communicate in this file.*/