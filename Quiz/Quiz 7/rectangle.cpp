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
    lbval = ;
    rtval = 0;
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

}

void Rectangle::printRectangle() const
{

}