#include<iostream>
#include<cstdlib> // for using rand() and srand()
using namespace std;
int main(){

    int seed;
int z1,z2,z3;

cout << " ------ The random numbers ------ \n" <<endl;

cout << "To initialize the random number generator, "
     << "\n please enter an integer value: ";
     
     cin>> seed; // For input an integer value;

     srand(seed);  // and use it as argument for a
// new sequence of random numbers.

     z1 = rand();
     z2 = rand();
     z3 = rand();

     cout << "\nThree random numbers: "
          << z1 << "   " << z2 <<"   " << z3 << "   " << endl;

}