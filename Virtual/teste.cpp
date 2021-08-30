#include <iostream>
 
class A
{
public:
    virtual const char* getName() const { return "A"; } // примечание: Метод является const
};
 
class B: public A
{
public:
    virtual const char* getName() { return "B"; }
};
 
class C: public B
{
public:
    virtual const char* getName() { return "C"; }
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
