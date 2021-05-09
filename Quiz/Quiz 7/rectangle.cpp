#include <iostream>
#include "coordinate.hpp"
#include "rectangle.hpp"
using namespace std;

Rectangle::Rectangle()
{
    Coordinate x;
    Coordinate y;
}
Rectangle::Rectangle(Coordinate lbval, Coordinate rtval)
{

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
}

void Rectangle::printRectangle() const
{
    cout << lb.printXY() << " and " << rt.printXY() << endl;
}