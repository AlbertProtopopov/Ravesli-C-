#include <iostream> 
#include <map>

void init(std::map<int, int> &my_map);
void show(std::map<int, int> &my_map);
void del(std::map<int, int> &my_map);

int main()
{
    std::map<int, int> my_map;
    init(my_map);
    show(my_map);   
    
    return 0;
}

void init(std::map<int, int> &my_map)
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

void del(std::map<int, int> &my_map)
{
        
}
