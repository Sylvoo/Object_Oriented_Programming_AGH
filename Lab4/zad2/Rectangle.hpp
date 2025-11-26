#pragma once

#include "Figure.hpp"

class Rectangle : public Figure
{
private:
    double m_a;
    double m_b;

protected:
    // parametrized constructor (why this one is protected?)
    Rectangle(double a, double b, const Point &p, std::string name) :  m_a(a), m_b(b), Figure(p, name){
        //...
    };



public:
    // parametrized constructor
    Rectangle(double a, double b, const Point &p) : Rectangle(a,b, p, "Rectangle") {};
   
    /* TODO override the area() function properly */
    double area() const override
    {
        double square = m_a * m_b;

        return square;
    }

    /* TODO create proper setters and getters for for sides */

    void description() const override {
        std::cout << "I have sides of length " << m_a << " and " << m_b << std::endl;
        printCentre();
    }

    void setA(double a)
    {
        m_a = abs(a);
    }
    

    void setB(double b)
    {
        m_b = abs(b);
    }

    double getA() const
    {
        return m_a;
    }

    double getB() const 
    {
        return m_b;
    }
};
