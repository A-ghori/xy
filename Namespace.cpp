#include<iostream>

//NameSpace - provide a solution for preventing name conflicts
// in large projects. Each entity needs a unique name.
//A namespace allows for identity named entities
// As long as the namespaces are different

namespace first {
    int x = 1;
}
namespace second {
    int x = 2;
}

int main(){
 int x = 0;
 std::cout << first :: x << std::endl;

// the :: known as scope resolution operator 
}