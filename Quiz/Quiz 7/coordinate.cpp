#include <iostream>
#include "coordinate.hpp"
using namespace std;


// Coordinate::Coordinate()
// {

// }
Coordinate::Coordinate(double xval, double yval)
{
    xval = 0;
    yval = 0;
}

int Coordinate::getX() const
{
    return x;
}

int Coordinate::getY() const
{
    return y;
}

void Coordinate::setXY(double xval, double yval)
{
    x = xval;
    y = yval;
}

void Coordinate::printXY() const
{
    cout << x << " , " << y << endl;
}