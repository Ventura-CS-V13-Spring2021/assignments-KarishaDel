#include <iostream>
#include "coordinate.hpp"
using namespace std;




Coordinate::Coordinate();
Coordinate(double xval, double yval);
int getX() const;
int getY() const;
void setXY(double xval, double yval);
void printXY() const;