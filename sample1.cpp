#include<iostream>
#include<iomanip>
using namespace std;

int main() {

    double x = 12.0;
    //cout.precision(4);
cout << setprecision(3); 
    cout<< "By default:    " << x << endl;
    cout << "Showpoint:  "<< showpoint << x <<endl;

    cout << "Fixed: " << fixed << x << endl;

    cout << "Scietific: " << scientific << x <<endl;
}