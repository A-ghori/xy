#include<iostream>
using namespace std;

int main() {
    int num;
    int count = 0;

    cout << "Enter your Numbers : " << endl;
    cin >> num;

    while (num > 0) {
        num /= 10;          // ek digit hata raha hai
        count++;            // count badha raha hai
        cout << "Digits = " << count << endl; // har step me print
    }
}