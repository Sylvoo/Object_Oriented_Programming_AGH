#include <iostream>
#include <cmath>
#include "ComplexNumber.hpp"


int main()
{
    ss::jpo::ComplexNumber cn1(2.0,3.0);
    ss::jpo::ComplexNumber cn2(10.0, 20.0);
    double num = 1.0;

    std::cout<<cn1+cn2<<std::endl;
    std::cout<<(cn1+=cn2)<<std::endl;
    std::cout<<cn1+num<<std::endl;
    std::cout<<(cn2+=num)<<std::endl;
    std::cout<<cn1+cn2<<std::endl;

    cn1.setReal(2.0);
    cn1.setImag(3.0);
    cn2.setReal(10.0);
    cn2.setImag(20.0);
    
    std::cout<<cn1-cn2<<std::endl;
    std::cout<<(cn1-=cn2)<<std::endl;
    std::cout<<cn1-num<<std::endl;
    std::cout<<(cn1-=cn2)<<std::endl;

    cn1.setReal(2.0);
    cn1.setImag(3.0);
    cn2.setReal(10.0);
    cn2.setImag(20.0);

    std::cout<<cn1*cn2<<std::endl;
    std::cout<<(cn1*=cn2)<<std::endl;

    cn1.setReal(2.0);
    cn1.setImag(3.0);
    cn2.setReal(10.0);
    cn2.setImag(20.0);

    std::cout<<cn1/cn2<<std::endl;
    std::cout<<(cn1/=cn2)<<std::endl;

    cn1.setReal(2.0);
    cn1.setImag(3.0);
    cn2.setReal(10.0);
    cn2.setImag(20.0);

    std::cout<<((cn1==cn2) ? "true" : "false")<<std::endl;    
    std::cout<<((cn1!=cn2) ? "true" : "false")<<std::endl; 



    return 0;
}