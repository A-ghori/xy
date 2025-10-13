#include<iostream>
#include<string> // Declaration of Class String
using namespace std;


int main(){

    string prompt("Whats is your name ? ---"),
    name,
    line(40,'-'),
    total = "Hello";

    cout <<prompt;
    getline(cin, name);

    total = total + name;

    cout << line <<endl
         << total << endl;

    cout << "  Your Name Is : "  //Outputs Length

        << name.length() << " Characters Long " << endl;

        cout << line << endl;

}