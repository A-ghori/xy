#include<iostream>

using namespace std;

void line();
void message(); // Prototypes
int main(){
cout<<"! Hello The Program Starts in main()." <<endl;
line();
message();
line();
cout<<" At the end of the main()."<<endl;

return 0;
}

void line() // To draw a line 
{
cout<<"_______________________"<<endl;
}

void message() // to display a message 
{
    cout<< "In function message" <<endl;
}