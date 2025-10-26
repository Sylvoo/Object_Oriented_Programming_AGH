#include<iostream>
#include "Circle.hpp"

class MyClass
{
    std::string m_name;

    public:

    //Student(std::string n, int a, std::string f) : name(n), age(a), m_faculty(f) {

    MyClass(std::string n) : m_name(n)
    {
        std::cout<<"Construktor of "<<m_name<<" class called\n";
    };

    ~MyClass()
    {
        std::cout<<"Destructor of "<<m_name<<" class called\n";
    }

    std::string getName() const
    {
        return m_name;
    }
};

MyClass global("global");
int main()
{
    std::cout<<"Enternig main() function\n";
    MyClass local("local");

    {
        MyClass block("block");
    }
    

    std::cout<<"Leaving main() function\n";

    std::cout<<"----------- Point class -----------------\n";
    Point point(2,3);
    point.display();
    std::cout<<"------------ End class  ------------------\n";

    std::cout<<"----------- Circle Class -----------------\n";
    double r = 1;
    //double* radius = &r ;
    Circle circ(&r, point);
    std::cout<<"Are of circle: "<<circ.area()<<"\n";
    std::cout<<"------------ End class  ------------------\n";
}