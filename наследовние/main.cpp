#include <iostream>
#include <string>

class Parent 
{
    public:
    std::string name = "Parent";
    void say()
    {
        std::cout << "How are you" << std::endl;
    }
};

class Child: public Parent
{
    
};

int main()
{
    Parent parent;
    std::cout << parent.name << std::endl;
    parent.say();
    
    Child child;
    std::cout << child.name << std::endl;
    child.say();  
}
