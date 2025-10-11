#include <iostream>
using namespace std;

void abc();      // Prototype
int main()
{
    cout<< endl << "Dear Reader , "
        <<endl << "have a " ;
        abc();
        cout<< "!" << endl;


}

void abc(){
    cout<< "BREAK" << endl;
}