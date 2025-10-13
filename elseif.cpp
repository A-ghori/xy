#include<iostream>

using namespace std;

int main(){
    int age;

    cout<<"You Can Check Your Voting Criteria As Per Your Age : --------" << endl;

    cout<<"Enter Your Age Below : " <<endl;

    cin >> age;

    if(age >= 120 || age <= 0){
        cout<<"Invalid Age" <<endl;
    }else if(age>=18){
        cout<<"You are able to give a Vote" <<endl;
    } else{
        cout << "You Cant Vote" <<endl;
    }
}