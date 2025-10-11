#include<iostream>
using namespace std;

int var1;
int var2 = 2;

int main(){
    char ch('A');  
    // or char ch = 'A';

    cout<< "Value of var1:         " << var1    <<endl;
    cout<< "Value og var2:         " << var2    <<endl;
    cout<< "Character in ch:       " << ch      <<endl;

    int sum, number = 3;    //Local Variable with
    sum = number + 5;

    cout<< "Value of sum :         "<< sum       <<endl;


}