#pragma once

class Point {
private:
    int m_x;
    int m_y;
public:
    // parametrized constructor
    Point(int x, int y) : m_x(x), m_y(y){}; 

    int getX() const {
        return m_x;
    }
    int getY() const {
        return m_y;
    }
    void setX(double value) {
       m_x = value;
    }
    void setY(double value) {
       m_y = value;
    }
};