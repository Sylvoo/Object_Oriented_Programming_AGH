#pragma once

#include <iostream>
#include <string>
#include "Point.hpp"

class Figure {
private:
    Point m_centre;
    std::string m_name;
public:
    // parametrized constructor
    Figure(const Point &p, std::string name) : m_centre(p), m_name(name){};

    virtual double area() const = 0;
    virtual void description() const = 0;

    void printCentre() const {
        std::cout << "My centre is (" << m_centre.getX() << ", " << m_centre.getY() << ")" << std::endl;
    }

    void introduce() const {
        std::cout << "I'm a " << m_name << std::endl;
    }

    /* TODO create a setter and getter for centre */
    void setCentre(Point point)
    {
        m_centre.setX(point.getX());
        m_centre.setY(point.getY());
    }

    Point getCentre() const
    {
        int arr[2];
        arr[0] = m_centre.getX();
        arr[1] = m_centre.getY();
        Point tempPoint(arr[0], arr[1]);
    
        return tempPoint;
    }
};