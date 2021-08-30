#include <iostream> // последствия работы с двумя итераторами для одного контейнера непредсказуемы
#include <map>

void init_1(std::map<int, int> &my_map);
void init_2(std::map<int, int> &my_map);
void show(std::map<int, int> &my_map);
void del_1(std::map<int, int> &my_map);
void del_2(std::map<int, int> &my_map);

int main()
{
    std::cout << "Hello World" << std::endl;
    
    std::map<int, int> my_map1;
    
    init_1(my_map1);
    
    show(my_map1);
    
    del_1(my_map1);
    
    std::map<int, int> my_map2;
    
    init_2(my_map2);
    
    show(my_map2);
    
    del_2(my_map2);
    
    show(my_map2);       
    
    return 0;
}

void init_1(std::map<int, int> &my_map)
{
    for (int i = 1; i < 11; i++)
    my_map.insert(std::make_pair(i, 10+i));
}

void init_2(std::map<int, int> &my_map)
{
    my_map.insert(std::make_pair(1, 10));
    my_map.insert(std::make_pair(2, 10));
    my_map.insert(std::make_pair(3, 10));
    my_map.insert(std::make_pair(4, 11));
    my_map.insert(std::make_pair(5, 11));
    my_map.insert(std::make_pair(6, 10));
    my_map.insert(std::make_pair(7, 10));
    my_map.insert(std::make_pair(8, 10));
    my_map.insert(std::make_pair(9, 10));
    my_map.insert(std::make_pair(10, 10));
}

void show(std::map<int, int> &my_map)
{
    std::cout << "Элементы последовательности пар" << std::endl;
    
    for (auto i = my_map.begin(); i != my_map.end(); i++)
    {
        std::cout << "(" << i->first << ", " << i->second << ") ";
    }
    std::cout << std::endl << std::endl;
}

void del_1(std::map<int, int> &my_map)
{
    for (auto i = my_map.begin(); i != my_map.end(); i++)
    {
        if (i->second == 15)
        {
            std::cout << "при second = 15 i->first = " << i->first << std::endl;
            std::cout << "при second = 15 i->second = " << i->second << std::endl;
            i = my_map.erase(i);
            std::cout << "после my_map.erase(i) i->first = " << i->first << std::endl;
            std::cout << "после my_map.erase(i) i->second = " << i->second << std::endl;
        }
    }
    
}

void del_2(std::map<int, int> &my_map)
{
    auto j = my_map.begin();
    j++;    
    
    for (auto i = my_map.begin(); i != my_map.end(); i++)
    {
        if (i->second == j->second)
        {
            std::cout << "при i->second = j->second i->first = " << i->first << std::endl;
            std::cout << "при i->second = j->second j->first = " << j->first << std::endl;
            j = my_map.erase(j);
            std::cout << "после my_map.erase(i) i->first = " << i->first << std::endl;
            std::cout << "после my_map.erase(i) j->first = " << j->first << std::endl;
            i = j;
            j++;
        }
        else j++;
        
        std::cout << std::endl;
    } 
}
