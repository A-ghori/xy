#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int euro = 1;
    double rate = 1.15;
int count =0;
    cout << fixed << setprecision(2);

    cout << "\tEuro   \tDollar\n";


    while(euro <= 5){
        ++count;
        euro ++;
        cout<< "\t" << euro;
        cout<< "\t" <<euro*rate << "    Counts "<<count <<endl;
    }
 std::cout<<"\n Total count = " << count <<endl;

}