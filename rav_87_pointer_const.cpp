#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>

using namespace std;

const int a = 10;
int const b = 20;
const int c = 30;
int d = 40;
int e = 50;

const int * pa = &d;
int const * pb;
const int * const p = &a;
int * const pb2 = &e;

int main(){

    cout << "const int a = " << a << endl;
    //a = 10; //ошибка, константная переменная только для чтения
    
    cout << "const int b = " << b << endl;
    //b = 30; // ошибка, константная переменная только для чтения
    
    pa = &c;
    //*pa = 40;
    
    pb = &c;
    //*pb = 50;
    //c = 50;
    //c = &d;
    cout << "pb = " << *pb << endl;
    //*p = 100;
    //*pb2 = 100;
    
    //int * pint = new int[];
    //delete int;
    
    int * array = new int[20];
    
    cout << "sizeof(array) = " << sizeof(array) << endl;
    cout << "sizeof(array[20]) = " << sizeof(array[20]) << endl;
    cout << "*array = " << *array << endl;
    cout << "общий размер array sizeof(*array) * 20 = " << sizeof(*array) * 20 << endl;
    
    for (int i = 0; i < 20; i++)
    { 
        array[i] = i + 1;
        cout << "array[" << i << "] = " << array[i] << endl;
    }
    
    cout << "Первый элемент массива *array = " << *array << endl;
    cout << "Второй элемент массива *(array + 1) = " << *(array + 1) << endl;
    
    delete [] array;
    array = nullptr;
    
    int array2[10][10];
    int array3[20];  
    
    cout << "*array3 = " << *array3 << endl;
    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(array2) = " << sizeof(array2) << endl;
    cout << "sizeof(array3) = " << sizeof(array3) << endl;
    
    cout << "sizeof(std::string) = " << sizeof(std::string) << endl;
    std::string names[10];
    cout << "sizeof(names) = " << sizeof(names) << endl;
    std::string * peoples = new std::string[10];
    delete [] peoples;
    peoples = nullptr;
    
    int z = 999;
    int **pp1;
    int *p = &z;
    int ** pp2 = &p;  
    cout << "**pp2 = " << **pp2 << endl; 
    
    int **pparray = new int * [10];
    delete[] pparray;
    pparray = nullptr;
    
    cout << "sizeof(std::string) = " << sizeof(std::string) << "bytes" << endl;
    cout << "sizeof(std::vector) = " << sizeof(std::vector) << "bytes" << endl;
    cout << "sizeof(std::list) = " << sizeof(std::list)  << "bytes" << endl;
    cout << "sizeof(std::set) = " << sizeof(std::set)  << "bytes" << endl;
    cout << "sizeof(std::map = " << sizeof(std::map)  << "bytes" << endl;
    cout << "sizeof(char*) = " << sizeof(char*) << "bytes" << endl;
    cout << "sizeof(char) = " << sizeof(char) << "bytes" << endl;
    cout << "sizefo(sort) = " << sizeof(short) << "bytes" << endl;
    cout << "sizefo(size_t) = " << sizeof(size_t) << "bytes" << endl;    
    cout << "sizeof(int) = " << sizeof(int) << "bytes" << endl;
    cout << "sizefo(long) = " << sizeof(long) << "bytes" << endl;
    cout << "sizefo(long long) = " << sizeof(long long) << "bytes" << endl;
    cout << "sizeof(double) = " << sizeof(double) << "bytes" << endl;  
    
    return 0;
}
