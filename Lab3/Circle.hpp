#include "Point.hpp"

class Circle
{
    double*  m_r;

    public:
    Point point1;

   // Circle(double* r, const Point& p) : m_r(new double(sizeof(r))), point(p){};
    Circle(double* r, Point p) : point1(p)
    {
        m_r = new double;
        *m_r = *r;
    };


    ~Circle()
    {
        delete m_r;
    }

    double getRadius()
    {
        return *m_r;
    }
    void setRadius(double radius)
    {
        if(radius >= 0)
        {
            *m_r = radius;   
        }   
    }

    double area()
    {
        return 3.14*(*m_r)*(*m_r);
    }

};