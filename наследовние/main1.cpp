#include <iostream>
#include <string>

class Parent 
{
    public:
    std::string name = "Parent";
    void say()
    {
        std::cout << "I am " << name << std::endl;
    }
};

class Child: public Parent
{
    public:
    std::string ch_name = "Child";
    void say()
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
    Parent parent;
    std::cout << parent.name << std::endl;
    parent.say();
    
    Child child;
    std::cout << child.ch_name << std::endl;
    child.say();
    child.myParent();  
}
