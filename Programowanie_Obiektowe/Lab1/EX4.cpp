#include <iostream>

double ftoC(double Farenheit) 
    {
        double Celsius = 0 ;
        // (F-32)*5/9 ;
        Celsius = (Farenheit - 32.0)*(5.0/9.0);
        return Celsius;
    }

int main()
{
    std::cout << "-------------------------------------------------"<<std::endl;
    std::cout << "---------------------TEMPERATURE-----------------"<<std::endl;
    
    double far = 0;
    std::cout << "Type Farenheit: ";
    std::cin >> far;
    std::cout << "Celsius temp = "<< ftoC(far);
    return 0;
}