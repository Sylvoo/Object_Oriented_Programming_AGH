#include<iostream>
#include<string>

class Student {
private:
    std::string m_name;
    int m_age;

public:

    Student() // konstruktor
    {
        m_name = "Ala";
        m_age = 2;
    }

    ~Student()
    {
        std::cout<<"\nDestroing an object";
    }
    void setAge(int a) {
        if(a>=0) m_age = a;
    }

    int getAge() const {
        return m_age;
    }

    void setName(std::string n) {
        if(n.size() != 0) m_name = n;
    }
    std::string getName() const {
        return m_name;
    }
};


int main()
{
    Student student1;

    student1.setAge(10);
    student1.setName("");
    int age = student1.getAge();
    std::cout<<"Name: "<<student1.getName()<<" Age: "<<age;

}