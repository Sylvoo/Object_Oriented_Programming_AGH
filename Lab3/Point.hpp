#include<iostream>


class Point
{
    public:
    int x,y;

    Point(int x, int y): x(x), y(y){};

    void display()
    {
        std::cout<<"("<< x <<","<< y<<")\n";
    }

};
