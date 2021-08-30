#include <iostream>

using namespace std;

void say_hello()
{
    cout << "Hello" << endl; 
}

void sum(int a, int b)
{
    cout << "The sum is: " << a + b << endl;
}

void say_something(std::string str)
{
    cout << str << endl;
}

void calc_area(const double pi, int radius)
{
    cout << "The area is = " << pi*radius*radius << endl;
}
