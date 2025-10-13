#include<iostream>
#include<cmath>

using namespace std;

int main(){
double x = 2.5,y1,y;

// computes x raise to the power 3:

y1 = pow(x, 3);
y = pow(x,3.0);

cout<<"2.5 raise to 3 yeilds:              "
    <<y1<<endl;

    cout << "2 + (5 raised to the power 2.5) yeilds: " 
        << 2.0 + pow(5.0,x) <<endl;



}