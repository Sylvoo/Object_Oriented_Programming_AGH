#pragma once

#include "Rectangle.hpp"

class Square : public Rectangle
{
    double a;

public:
    // parametrized constructor
    Square(double a, const Point &p) : a(a), Rectangle(a, a, p, "Square") {};
};