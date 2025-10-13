#include<iostream>

int main()
{
    int number = 0;
    std::cout << "Type a number: ";
    std::cin >> number;
    int sum = 0;
    if(number<0) 
    {
        return 1;
    }
    for(int i = 0; i<=number; i++)
    {
        sum += i;
    }
    std::cout<< "Sum: " <<sum<<std::endl;
    return 0;
}