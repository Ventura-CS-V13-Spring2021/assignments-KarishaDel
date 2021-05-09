#include <iostream>
#include "coordinate.hpp"
#include "rectangle.hpp"
using namespace std;

Rectangle::Rectangle()
{
    Coordinate x;
    Coordinate y;
    setLBRT(x,y);
}
Rectangle::Rectangle(Coordinate lbval, Coordinate rtval)
{
    setLBRT(lbval,rtval); //IDE recomended that I use the lbval and rtval instead of x and y so it can pull from line 37
}

Coordinate Rectangle::getLB() const
{
    return lb;
}

Coordinate Rectangle::getRT() const
{
    return rt;
}

double Rectangle::getArea()
{
    return area;
}

Coordinate Rectangle::getCenter()
{
    return center;
}

void Rectangle::setLBRT(Coordinate lbval, Coordinate rtval)
{
    lb = lbval;
    rt = rtval;

    area = ( rt.getX() - lb.getX() ) * (rt.getY() - lb.getY() ); //get the x and y values for both points 
    //center
    int ct_x = (rt.getX() + lb.getX()) / 2;
    int ct_y = (rt.getY() + lb.getY()) / 2;
    center.setXY(ct_x,ct_y); //set values to x and y
}

void Rectangle::printRectangle() const
{
    cout << "Point at bottom Left: \n";
    lb.printXY();
    cout << "Point at top right: \n";
    rt.printXY(); //seperate to ge rid of error line under the <<
    cout << "Area: " << area << "\n" ;
    //cout << "Center: \n";
    //center.printXY();
}