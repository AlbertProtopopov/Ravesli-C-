#include <iostream>
#include "methods.h"

void vec_init(std::vector<int> &vec, int a, int b)
{
    for (size_t i = a; i < b; i++)
    vec.push_back(i);
}

void vec_show(std::vector<int> &vec)
{
    std::cout << "Элементы вектора vec: ";
    for (auto i = vec.cbegin(); i < vec.cend(); i++)
    std::cout << *i << " ";
    std::cout << std::endl;
    std::cout << "Количество элементов вектора: " << vec.size() << std::endl;
    std::cout << std::endl;
}

void vec_sizeof(std::vector<int> &vec)
{
    std::cout << "sizeof(vec) = " << sizeof(vec) << std::endl;
}

void vec_sort(std::vector<int> &vec)
{
    std::sort(vec.begin(), vec.end());
}

void vec_reverse(std::vector<int> &vec)
{
    std::reverse(vec.begin(), vec.end());
}
