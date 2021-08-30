#include <iostream>
#include "functions.h"
#include "constants.h"

//using namespace std;
int two_hundred = 200; // у глобольных 

int const four_hundred = 400;

int main(){
    //two_hundred = 200; это не ошибка
    //cout << "Hello World" << endl;
    say_hello();
    sum(3, 4);
    say_something("Something");
    //extern const double pi;
    calc_area(constants::pi, 10);
    
    extern const int pi;
    calc_area(pi, 10);
    
    extern int pi2;
    calc_area(pi2, 10);
    
    std::cout << hundred << std::endl;
    std::cout << three_hundred << std::endl;
    std::cout << five_hundred << std::endl;
    
    double a = 0.9;
    int b = 1;
    double c = b/a;
    int d = a/b;
    
    std::cout << sizeof(double) << std::endl;
    std::cout << sizeof(a) << std::endl; 
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;  
    
    return 0;
    }
