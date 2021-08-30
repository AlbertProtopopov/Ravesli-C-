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
    B &rParent = c; // примечание: rParent на этот раз класса B
    std::cout << rParent.getName() << '\n';
 
    return 0;
}
