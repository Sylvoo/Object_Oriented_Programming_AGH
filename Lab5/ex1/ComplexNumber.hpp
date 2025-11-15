#pragma once


class ComplexNumber
{
    double m_real;
    double m_imag;

    public:
    ComplexNumber(double r = 0.0, double i=0.0) : m_real(r), m_imag(i) {};
    ~ComplexNumber(){};

    // przeciazenia 
    ComplexNumber operator+(const ComplexNumber& other) const
    {
        return ComplexNumber(m_real+other.m_real, m_imag+other.m_imag);
    }

    ComplexNumber operator+(const double number) const
    {
        return ComplexNumber(m_real+number, m_imag+number);
        //return ComplexNumber(m_real+number, m_imag);
    }

    ComplexNumber operator+=(const ComplexNumber& other)
    {
        m_real += other.m_real;
        m_imag += other.m_imag;
        return *this;
    }

    ComplexNumber operator+=(const double number)
    {
        m_real += number;
        //m_imag += number;
        return *this;
    }

    ComplexNumber operator-(const ComplexNumber& other) const
    {
        return ComplexNumber(m_real-other.m_real, m_imag-other.m_imag);
    }

    ComplexNumber operator-(const double number) const
    {
        return ComplexNumber(m_real-number, m_imag-number);
        //return ComplexNumber(m_real-number, m_imag);
    }

    ComplexNumber operator-=(const ComplexNumber& other)
    {
        m_real -= other.m_real;
        m_imag -= other.m_imag;
        return *this;
    }

    ComplexNumber operator-=(const double number)
    {
        m_real -= number;
        // m_imag -= number;
        return *this;
    }

    ComplexNumber operator*(const ComplexNumber& other) const 
    {
        return ComplexNumber(m_real*other.m_real, m_imag*other.m_imag);
    }

    ComplexNumber operator*=(const ComplexNumber& other)
    {
        m_real *= other.m_real;
        m_imag *= other.m_imag;
        return *this;
    }

    ComplexNumber operator/(const ComplexNumber& other) const
    {
        return ComplexNumber(m_real/other.m_real, m_imag/other.m_imag);
    }

    ComplexNumber operator/=(const ComplexNumber& other) 
    {
        m_real /= other.m_real;
        m_imag /= other.m_imag;
        return *this;
    }

    bool operator==(const ComplexNumber& other) const
    {   
        return (m_real == other.m_real)&&(m_imag==other.m_imag);
    }

    bool operator!=(const ComplexNumber& other) const
    {
        return (m_real != other.m_real)||(m_imag!=other.m_imag);
    }

    friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& complex)
    {
        os << complex.m_real << (complex.m_imag > 0 ? " + " : " - ") << abs(complex.m_imag) << "i";
        return os; // zeby mozna bylo pisac kilka zmiennych, lancuchowo
    }

    // settery, gettery
    void setReal(double real)
    {   
        m_real = real;
    }

    void setImag(double imag)
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