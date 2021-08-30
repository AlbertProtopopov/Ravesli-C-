#include <iostream>
 
class Parent
{
public:
    Parent()
    {
        std::cout << "Calling Parent()" << std::endl;
    }
    virtual~Parent() // примечание: Деструктор не виртуальный
    {
        std::cout << "Calling ~Parent()" << std::endl;
    }
};
 
class Child: public Parent
{
private:
    int* m_array;
 
public:
    Child(int length)
    {
        std::cout << "Calling Child()" << std::endl;
        m_array = new int[length];
    }
 
    virtual~Child() // примечание: Деструктор не виртуальный
    {
        std::cout << "Calling ~Child()" << std::endl;
        delete[] m_array;
    }
};
 
int main()
{
    Child *child = new Child(7);
    //delete child;
    Parent *parent = child;
    delete parent;
 
    return 0;
}
