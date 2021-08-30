#include <iostream>
 
class Anything
{
public:
    static const int s_value = 3;
};
 
//int Anything::s_value = 3;
 
int main()
{
    Anything first;
    Anything second;
 
    //first.s_value = 4;
 
    std::cout << first.s_value << '\n';
    std::cout << second.s_value << '\n';
    return 0;
}
