#include<iostream>

using namespace std;

int main(){
int index;
cout<<"Please type your index value : -------- \n";

cin>>index;

while(index<=34){
    cout<<"We are at index number: " <<index<<endl;
    
    index = index + 1;
}

return 0;
}