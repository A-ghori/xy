#include<iostream>

#include<string>

using namespace std;

int main(){

    string name, age, line(3, '-');


    cout << "What's your name ? ";
    getline(cin,name);


    cout<<"Whats your age ? ";
    getline(cin,age);

    cout<<line<<endl;

    cout<< " Hello" << name << " ! Your Age is " << age << "." << endl;

    cout << "Your Name Has" << name.length() << "Characters."  << endl;

}