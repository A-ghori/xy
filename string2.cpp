#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Fixed seed
    srand(1);
    cout << rand() << " " << rand() << endl; // Same every run

    // Dynamic seed
    srand(time(0));
    cout << rand() << " " << rand() << endl; // Different every run
}