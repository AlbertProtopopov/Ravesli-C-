#include <iostream>
#include <vector>

using namespace std;

int main(){

    cout << "Hello World" << endl;
    vector<int> vec {1, 2, 3, 4 ,5};
    
    for (auto i = vec.begin(); i != vec.end(); ++i)
    cout << "*i = " << *i << endl;
    
    return 0;
    }
