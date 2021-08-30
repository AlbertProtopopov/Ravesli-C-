#include <iostream>

using namespace std;

namespace variables {
 int a = 10;   
}

int main(){

    int a = 20;
    
    cout << a << endl;
    cout << variables::a << endl;  
    
    int *b = new int (199);
    
    cout << "b = " << b << endl;
    cout << "*b = " << *b << endl;
    
    cout << "sizeof(char) = " << sizeof(char) << endl;
    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(b) = " << sizeof(b) << endl;
    cout << "sizeof(*b) = " << sizeof(*b) << endl;
    
    delete b;
    
    cout << "b after delete b = "<< b << endl;
    
    b = 0;
    
    cout << "b after b = 0: " << b << endl;
    // Разыменование указателя приравненного к нулю приводит к segmentation fault
    //cout << "*b after b = 0: " << *b << endl;
    // Повторная delete указателя не приводит к ошибке
    delete b;
    
    int * ptr;
    
    cout << endl << endl;
    cout << "Далее работаем с int * ptr" << endl;
    cout << "sizeof(ptr) = " << sizeof(ptr) << endl;
    cout << "ptr = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;
    ptr = &a;
    cout << "ptr after ptr = &a: " << ptr << endl;
    cout << "*ptr after ptr = &a: " << *ptr << endl;
    ptr = 0;
    cout << "ptr after ptr = 0: " << ptr << endl;
    //cout << "*ptr after ptr = 0: " << *ptr << endl; // Разыменование указателя приравненного к нулю приводит к segmentation fault 

return 0;
}
