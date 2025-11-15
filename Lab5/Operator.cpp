class ComplexNumber {
private:
    double m_real;
    double m_imag;

public:
    ComplexNumber(double r = 0.0, double i = 0.0) : m_real(r), m_imag(i) {}

    /**
     * operator+
     * example:
     *     ComplexNumber c1(4.0, 5.0);
     *     ComplexNumber c2(4.0, -8.0)
     *     ComplexNumber c3 = c1 + c2;
     */
    ComplexNumber operator+(const ComplexNumber& other) const
    {
        return ComplexNumber(m_real + other.m_real, m_imag+other.m_imag); // returnujemy nowy obiekt, konstruktor() 
    }
 
    /**
     * operator+=
     * example:
     *     ComplexNumber c1(4.0, 5.0);
     *     ComplexNumber c2(4.0, -8.0)
     *     c2 += c1;
     */
    ComplexNumber operator+=(const ComplexNumber& other)
    {
        m_real+=other.m_real;
        m_imag+=other.m_imag;
        return *this; // zwracamy wskaznik do liczby po lewej stronie operatora 
    }
};