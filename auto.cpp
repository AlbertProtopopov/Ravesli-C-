#include <iostream>

auto sum (int a, int b)
{
    return a+b;
}

auto sum (int b, double d)
{
    std::cout << "sum (double d, int b)" << std::endl;
    return d + b;
}

auto sub (int a, int b)->int;

int main()
{

    std::cout << "Auto" << std::endl;
    
    int a = sum(100, 200);
    
    auto b = sum(100, 300);
    
    auto c = sum(10, 0.1);
    
    int a1 = 10;
    
    double b1 = 3;
    
    auto c1 = a1 + b1;
    
    auto d1 = a1/b1;
    
    auto i1 = b1/a1;
    
    auto j1 = a1/3.0f;
    
    std::cout << "sum(10, 20) = " << sum(10, 20) << std::endl;
    std::cout << "int a  = sum(100, 200): " << a << std::endl;
    std::cout << "auto b = sum(100, 300): " << b << std::endl;
    std::cout << "auto c = sum(0.1, 10): " << c << std::endl;
    std::cout << "auto c1 = a1 + b1: " << c1 << std::endl;
    std::cout << "auto d1 = a1/b1 " << d1  << " sizeof(d1) = " << sizeof(d1) << std::endl;
    std::cout << "auto i1 = b1/a1: " << i1 << std::endl;
    std::cout << "auto j1 = a1/0.1f " << j1  << " sizeof(j1) = " << sizeof(j1) << std::endl;
    std::cout << "sub(100, 50) = " << sub(100, 50) << std::endl;
}

auto sub (int a, int b)->int
{
    return a - b;
}



