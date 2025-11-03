#include <iostream>

class Animal
{
    public:
    virtual void makeSound() = 0;

    virtual ~Animal(){};
};

class Dog : public Animal
{
    void makeSound() override
    {
        std::cout<<"Woof!\n";
    }
};

class Cat : public Animal
{
    void makeSound() override
    {
        std::cout<<"Meow!\n";
    }
};


Animal* chooseAnimal(int number)
{    
    if(number%2 == 0)
    {
        Animal* animal = new Dog;
        return animal;
    }   
    else 
    {
        Animal* animal = new Cat;
        return animal;
    }
}

int main()
{
    std::cout<< "Enter the number: ";
    int x{};
    std::cin >> x;

    Animal* animal = chooseAnimal(x);
    animal->makeSound();

    delete animal;

    return 0;
}