#pragma once
#include <type_traits>
//template <typename T>
//concept Arthm = std::is_arithmetic_v<T>;


template <typename T> 
requires std::is_arithmetic_v<T>

class ComplexNumber 
{
    T m_real;
    T m_imag;

    public:
    ComplexNumber(T r = 0.0, T i=0.0) : m_real(r), m_imag(i) {};
    ~ComplexNumber(){};

    // przeciazenia 
    ComplexNumber operator+(const ComplexNumber& other) const
    {
        return ComplexNumber(m_real+other.m_real, m_imag+other.m_imag);
    }

    ComplexNumber operator+(const T number) const
    {
        return ComplexNumber(m_real+number, m_imag+number);
        //return ComplexNumber(m_real+number, m_imag);
    }

    ComplexNumber& operator+=(const ComplexNumber& other)
    {
        m_real += other.m_real;
        m_imag += other.m_imag;
        return *this;
    }

    ComplexNumber& operator+=(const T number)
    {
        m_real += number;
        //m_imag += number;
        return *this;
    }

    ComplexNumber operator-(const ComplexNumber& other) const
    {
        return ComplexNumber(m_real-other.m_real, m_imag-other.m_imag);
    }

    ComplexNumber operator-(const T number) const
    {
        return ComplexNumber(m_real-number, m_imag-number);
        //return ComplexNumber(m_real-number, m_imag);
    }

    ComplexNumber& operator-=(const ComplexNumber& other)
    {
        m_real -= other.m_real;
        m_imag -= other.m_imag;
        return *this;
    }

    ComplexNumber& operator-=(const T number)
    {
        m_real -= number;
        // m_imag -= number;
        return *this;
    }

    ComplexNumber operator*(const ComplexNumber& other) const 
    {
        return ComplexNumber(m_real*other.m_real, m_imag*other.m_imag);
    }

    ComplexNumber& operator*=(const ComplexNumber& other)
    {
        m_real = m_real * other.m_real + m_imag * other ;
        m_imag *= other.m_imag;
        return *this;
    }

    ComplexNumber operator/(const ComplexNumber& other) const
    {
        return ComplexNumber(m_real/other.m_real, m_imag/other.m_imag);
    }

    ComplexNumber& operator/=(const ComplexNumber& other) 
    {
        m_real /= other.m_real;
        m_imag /= other.m_imag;
        return *this;
    }

    bool operator==(const ComplexNumber& other) const
    {   
        return (m_real == other.m_real)&&(m_imag == other.m_imag);
    }

    bool operator!=(const ComplexNumber& other) const
    {
        return !(operator==(other));
        // return !(*this == other)
    }

    friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& complex)
    {
        os << complex.m_real << (complex.m_imag > 0 ? " + " : " - ") << abs(complex.m_imag) << "i";
        return os; 
    }

    // settery, gettery
    void setReal(T real)
    {   
        m_real = real;
    }

    void setImag(T imag)
    {
        m_imag = imag;
    }

    double getReal() const
    {
        return m_real;
    }

    double getImag() const
    {
        return m_imag;
    }

};





