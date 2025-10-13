#include<iostream>
using namespace std;

int main () {

    int index;

    cout<<"Enter you valid Number: ------\n";

    cin>>index;

    for(int i=0; i<index; i++){
        if(i>=34){
            cout<<"Invalid\n";
        }else{
            cout<<"Everything is Fair and Lovely\n";
            index++;
        }
    }
}