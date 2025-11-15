#include <iostream>
#include <cmath>
#include <type_traits>
#include <concepts>
#include "ComplexNumber.hpp"

//  g++ -std=c++20 -o main main.cpp 
int main()
{
    ComplexNumber cn1(2.0,3.0);
    ComplexNumber cn2(1, 2); 
    
    short num1 = 4;
    short num2 = 5;
    ComplexNumber shortt(num1, num2); 

    long long int num100 = 500000000;
    long long int num101 = 500000000;
    ComplexNumber longlong(num100, num101);

    std::cout<<cn1.getReal()<<(cn1.getImag()>0 ? " + ":" - ")<<cn1.getImag()<<"i"<<std::endl;    
    std::cout<<shortt.getReal()<<(shortt.getImag()>0 ? " + ":" - ")<<shortt.getImag()<<"i"<<std::endl;
    std::cout<<longlong.getReal()<<(longlong.getImag()>0 ? " + ":" - ")<<longlong.getImag()<<"i"<<std::endl;
    std::cout<<longlong.getReal()<<(longlong.getImag()>0 ? " + ":" - ")<<longlong.getImag()<<"i"<<std::endl;

    std::string name = "Sylwek";

    //ComplexNumber(name, "kuku");


    return 0;
}