#include <iostream>
#include <string>

class Parent 
{
    protected:
    std::string name = "Parent";
    public:
    virtual void say ()
    {
        std::cout << "I am " << name << std::endl;
    }
};

class Child: public Parent
{
    public:
    std::string ch_name = "Child";
    virtual void say () override
    {
        std::cout << "I am " << ch_name << std::endl;
    }
    
    void myParent()
    {
        std::cout << "My parent is " << name << std::endl;
    }
};

int main()
{
    Parent * p;
    p = new Child;;
    p->say(); // выводит метод Parent.say(), чтобы выводил Child.say() нужно сделать Parent.say() виртуальным
    delete p;
    p = nullptr;
    
    p = new Parent;
    p->say();
    delete p;
    p = nullptr;
    
    Parent * p1;
    Child child;
    p1 = &child;
    p1->say(); // // выводит метод Parent.say(), чтобы выводил Child.say() нужно сделать Parent.say() виртуальным
}
