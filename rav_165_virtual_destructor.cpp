#include <iostream> 
 
class Parent
{
public:
    Parent()
    {
        std::cout << "Calling Parent()" << std::endl;
    }
    virtual ~Parent() // !! Если не сделать деструктор виртуальным, то ~Child() не будет вызываться при 'delete parent' !!
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
 
    virtual~Child() // деструктор виртуальный
    {
        std::cout << "Calling ~Child()" << std::endl;
        delete[] m_array;
    }
};
 
int main()
{
    Child * child = new Child(7);;
    //delete child;
    Parent *parent = child;
    delete parent;
    parent = nullptr;
 
    return 0;
}
