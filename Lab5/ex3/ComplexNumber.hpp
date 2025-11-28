#pragma once
#include <type_traits>
//template <typename T>
//concept Arthm = std::is_arithmetic_v<T>;


template <typename T> 
requires std::is_arithmetic_v<T>

class ComplexNumber 
{
    

    public:
    T m_real;
    T m_imag;
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
        T newReal = m_real * other.m_real -  m_imag * other.m_imag;   
        T newImag = m_real * other.m_imag + m_imag * other.m_real; 
      
        return ComplexNumber(newReal, newImag);
    }

    ComplexNumber& operator*=(const ComplexNumber& other)
    {
        double newReal = m_real * other.m_real -  m_imag * other.m_imag;   
        double newImag = m_real * other.m_imag + m_imag * other.m_real; 
        m_real = newReal;
        m_imag = newImag;
        return *this;
    }

    ComplexNumber operator/(const ComplexNumber& other) const
    {
        double divider;

        try
        {
            divider = other.m_real*other.m_real + other.m_imag+other.m_imag;
            if( divider == 0)
            {
                throw(divider);
            }   
        }
        catch (std::exception err)
        {
            std::cout<< "You can't divide by 0 !!!\n";
            std::cout<<err.what();
        }
 

       T newReal = (m_real*other.m_real + m_imag*other.m_imag)/divider;
       T newImag = (m_imag*other.m_real - m_real* other.m_imag )/divider;

       return ComplexNumber(newReal, newImag);
    }

    ComplexNumber& operator/=(const ComplexNumber& other) 
    {
        // double newReal = (m_real*other.m_real + m_imag*other.m_imag)/divider;
        // double newImag = (m_imag*other.m_real - m_real* other.m_imag )/divider;
        
        // m_real = newReal;
        // m_imag = newImag;

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





