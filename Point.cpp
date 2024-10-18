#include "Point.h"
#include <iostream>
#include <cmath>


Point::Point(double x, double y):x(x), y(y)
{
    std::cout << "Ctor point" << std::endl;
}

Point Point::creerPoint(double x, double y)
{
        return Point(x, y);
    
}

void Point::afficher() const
{
    std::cout << "x: " << this->x << ", y: " << this->y  <<std::endl;
}

//p1(x1,y1) et p2(x2,y2) => dist = sqrt((x2-x1)^2 + (y2-y1)^2)
double Point::distance(const Point& p) const
{
    return sqrt(pow(this->x - p.x, 2) + pow(this->y - p.y, 2));
     
}

void Point::translater(double dx, double dy)
{
    this->x += dx;
    this->y += dy;

}

bool Point::operator==(const Point& p) const
{
    return this->x == p.y && this->y == p.y;
}

Point::~Point()
{
    std::cout << "Dtor point" << std::endl;
}
