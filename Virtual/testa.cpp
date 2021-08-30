#include <iostream>
 
class A
{
public:
    virtual const char* getName() { return "A"; }
};
 
class B: public A
{
public:
    virtual const char* getName() { return "B"; }
};
 
class C: public B
{
public:
// Примечание: Здесь нет метода getName()
};
 
class D: public C
{
public:
    virtual const char* getName() { return "D"; }
};
 
int main()
{
    C c;
    A &rParent = c;
    std::cout << rParent.getName() << '\n';
 
    return 0;
}
