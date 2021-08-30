#include <iostream>
#include <string>

struct Birthday_1 {

    short day = 1;
    short month = 1;
    int year = 1900;
};

struct Birthday_2 {

    short day;
    short month;
    int year;
};

struct Person_1 {
    std::string name = "No name";
    int age = 30;
    double weight = 75;
    double heigth = 1.75;
    Birthday_1 *birthday;
};

struct Person_2 {
    std::string name;
    int age;
    double weight;
    double heigth;
    Birthday_2 birthday;
};

void show (Person_1 * person)
{
    std::cout << "\nPerson information:" << std::endl; 
    std::cout << "\tName: " << person->name << std::endl;
    std::cout << "\tAge: " << person->age << std::endl;
    std::cout << "\tWeight: " << person->weight << std::endl;
    std::cout << "\tBirthday: " << person->birthday->day << "." << person->birthday->month << "." << person->birthday->year <<"\n\n";
}
void show (Person_2 & person)
{
    std::cout << "\nPerson information:" << std::endl; 
    std::cout << "\tName: " << person.name << std::endl;
    std::cout << "\tAge: " << person.age << std::endl;
    std::cout << "\tWeight: " << person.weight << std::endl;
    std::cout << "\tBirthday: " << person.birthday.day << "." << person.birthday.month << "." << person.birthday.year << "\n\n";
}

int main()
{
    Person_1 *pperson_1;
    Person_1 person_1;
    pperson_1 = &person_1;
    show(pperson_1);
    
    Person_2 person_2 = {"Albert Protopov", 32, 84.5, 1.78, {25, 11, 1988} };
    show(person_2);
    
    return 0;
}
