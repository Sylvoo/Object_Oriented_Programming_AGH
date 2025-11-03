#pragma once
#include "Figure.hpp"

class Circle : public Figure
{
    private:
    double radius;

    public:
    Circle(double r, Point const &p) : radius(r), Figure(p,"Circle") {};

    void setRadius(double r)
    {
        radius = abs(r);
    }    

    double getRadius()
    {
        return radius;
    }

    double area() const override
    {
        return 3.14*radius;
    }

    void description() const override
    {
        std::cout<<"Hi, I am a Circle, of radius: "<<radius<<std::endl;
    }


};