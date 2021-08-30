#include "methods.h"

using namespace std;

int main(){

    std::vector<int> vec;
    
    vec_sizeof(vec);
    
    vec_init(vec, 10, 21);
    
    vec_sizeof(vec);
    
    vec_show(vec);
    
    vec_reverse(vec);
    
    vec_show(vec);
    
    vec_sort(vec);
    
    vec_show(vec);
  
    return 0;
}
