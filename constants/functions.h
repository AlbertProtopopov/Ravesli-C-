#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>

int hundred = 100;
extern int two_hundred;
extern const int four_hundred;

int three_hundred = hundred + two_hundred;
int five_hundred = hundred + four_hundred;

void say_hello();
void sum(int, int);
void say_something(std::string);
void calc_area(const double, int);

#endif
