#include<iostream>
#include<memory> // smart pointers

class Animal
{
    public:

    virtual void makeSound() = 0;

    virtual ~Animal(){};

};

class Dog : public Animal
{
    public:

    virtual void makeSound() override
    {
        std::cout<<"Bark\n";
    }

    ~Dog(){};
};

void add()
{
    std::cout<<"\nDodawanie\n";
}

void sub()
{
    std::cout<<"\nOdejmowanie\n";
}

void invokeFunc(void (*func)())
{
    func();
}


int main()
{
    std::unique_ptr<Animal> obj = std::make_unique<Dog>();

    obj->makeSound();

    // delete obj; - niepotrzebne poniewaz smart pointer sam zarzadza pamiecia  i ja zwalnia po wyjsciu poza scope
    //obj.reset(new Dog); - poprzedni obiekt DOG zostaje zwolniony(zniszczony) i teraz wksaznik wskazuje na nowy obiekt DOG
    //obj.reset() - wsk obj ma teraz nullptr

    // Animal* rawObj = obj.release(); - Obiekt nie jest niszczony, teraz rawObj wskazuje na obiekt DOG, samo obj staje sie nullptr
    // delete rawObj; -  teraz musi zostac zwolniony recznie

    std::unique_ptr<int> ptr1 = std::make_unique<int>(10);
    //std::unique_ptr<int> ptr2 = ptr1; - <ZLE> unique nie moze posiadac wiecej niz 1 wskaznik
    std::unique_ptr<int> ptr2 = std::move(ptr1); // ptr1 = nullptr, *ptr2 = 10, poprawne przekazanie wartosci 

    std::shared_ptr<int> ptr3 = std::make_shared<int>(10);
    std::shared_ptr<int> ptr4 = ptr3; // OK, liczy referencje, gdy 0 to sam zwalnia pamiec obiektu

    std::weak_ptr<int> weakPtr3 = ptr3; // nie zwieksza liczby referencji w liczniku referencji shared_ptr!
    std::cout<<"Number of ptr3 references: "<< ptr3.use_count()<<std::endl;
    // cos tam z weakPtr3.lock() - sprawdzanie czy obiekt istnieje


    // wsk na funkcje
    void (*func_ptr)() = add;
    invokeFunc(func_ptr); 

    func_ptr = sub;
    invokeFunc(func_ptr); 
}