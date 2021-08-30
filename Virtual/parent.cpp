#include <iostream>

using namespace std;

class Parent
{
    public:
    virtual const char* getName(){return "Parent";}; // added virtual
};

class Child: public Parent
{
    public:
    virtual const char* getName(){return "Child";}; // added virtual
};

int main()
{
    Child child;
    cout << "It is " << child.getName() << endl;
    
    Parent &rParent = child;
    cout << "It is " << rParent.getName() << endl;

    return 0;
}
