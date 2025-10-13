#include<iostream> 
#include<string>
#include<cstdlib>
#include<ctime>




using namespace std;

int main(){

string message =  "Learn from your Mistakes!";
 cout << "\n" << message << endl;

int len = message.length();

cout<< "Length of the string is : " << len << endl;

//Add a random number in addition;; 

srand(time(0));

int a = rand() ;
int b = rand ();


cout<< "\nRandom Numbers are : "<<a<< " and " <<b <<endl;
cout<< "Sum of Random Numbers: " << (a+b) << endl;


}

