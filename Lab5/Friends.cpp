#include<iostream>
#include<cmath>

class ComplexNumber {
private:
    double m_real;
    double m_imag;

public:
    ComplexNumber(double r = 0.0, double i = 0.0) : m_real(r), m_imag(i) {}

    // ...

    // std::cout << c1; <- TO TAK NAPRAWDE -> operator<<(std::cout, c1); !!!!!!!!!!!! 
    // metoda klasy moze byc wywolana jedynie na obiekcie tej klasy, po to jest przeciazenie 
    // skoro operator "<<" nie moze byc metoda ComplexNumber
    // to musi byc funkcja globalna oraz miec dostep do pol prywatnych klasy (m_real, m_imag) i to wlasnie robi FRIEND !!! 
    friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& c) {
        os << c.m_real << (c.m_imag >= 0 ? " + " : " - ") << std::abs(c.m_imag) << "i";
        // NOTE: returns os (output stream) which allows chaining outputs
        return os;
    }

    /*
    friend pozwala:
    udostępnić funkcji prywatne i chronione pola klasy
    ale NIE czyni jej metodą klasy
    i NIE narusza enkapsulacji, bo nadal sam decydujesz, komu dajesz dostęp
    */
};

// Jeśli nie chcemy przeciążać operatora wewnątrz klasy z użyciem słowa kluczowego friend, możemy go przeciążyć poza klasą:

/*
// outside class ComplexNumber
std::ostream& operator<<(std::ostream& os, const ComplexNumber& c) {
    // NOTE: being outside class requires us to use getters (because fields are private!)!!!!    <<<--------------------------
    os << c.getReal() << (c.getImag() >= 0 ? " + " : " - ") << std::abs(c.getImag()) << "i";
    return os;
}
*/