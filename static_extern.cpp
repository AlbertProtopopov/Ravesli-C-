#include <iostream>

using namespace std;

static int i = 0;
extern int b;

int sum(int,int);

void count();

int main(){

    cout << "Hello World" << endl;
    
    count();
    count();
    count();
    
    cout << count << endl;
    count();
    count();
    cout << count << endl;
    
    return 0;
    }
    
void count(){
    static int count = 0;
    count++;
    cout << count << endl;
}
