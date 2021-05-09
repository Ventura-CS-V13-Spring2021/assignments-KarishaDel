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
*/