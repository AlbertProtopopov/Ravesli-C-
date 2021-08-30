#include <iostream>
#include <string>

using namespace std;

const char* report();

void say_something(const char*);

void say_string(string);

std::string set_get_string(std::string);

#include "functions.cpp"

int main(){

    cout << "Hello World" << endl;
    report();
    say_something("I'am fine");
    say_string("it is wrong");
       
    cout << "sizeof(string): " << sizeof(string) << endl;
    cout << "sizeof(std::string): " << sizeof(std::string) << endl;
    
    cout << set_get_string("some string") << endl;
        
    return 0;
    }
    

