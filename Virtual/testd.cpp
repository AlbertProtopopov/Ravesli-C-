#include <iostream>
 
class A
{
public:
    virtual const char* getName() { return "A"; }
};
 
class B: public A
{
public:
    const char* getName() { return "B"; }  // примечание: Нет ключевого слова virtual
};
 
class C: public B
{
public:
    const char* getName() { return "C"; } // примечание: Нет ключевого слова virtual
};
 
class D: public C
{
public:
    const char* getName() { return "D"; } // примечание: Нет ключевого слова virtual
};
 
int main()
{
    C c;
    B &rParent = c; // примечание: rParent на этот раз класса B
    std::cout << rParent.getName() << '\n';
 
    return 0;
}
