#include<iostream>
#include<map>

using namespace std;

int main(){
map<string, int> ageMap; // key = string , value = int

//Adding elements 

ageMap["Shubhayu"] = 20;
ageMap["Alice"] = 36;
ageMap["Bob"] = 30;

cout<< "Alice is : " << ageMap["Alice"] <<endl;

}