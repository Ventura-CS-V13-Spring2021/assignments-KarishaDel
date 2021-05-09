#ifndef COORDINATE_H
#define COORDINATE_H
class Coordinate
{
private:
    double x;
    double y;

public:
    Coordinate() : x(0), y(0) {}; //initilize to 0
    Coordinate(double xval, double yval) : xval(x), yval(y) {};
    int getX() const;
    int getY() const;
    void setXY(double xval, double yval);
    void printXY() const;
};

#endif