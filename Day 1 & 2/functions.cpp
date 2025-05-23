#include<iostream>
using namespace std;

void sayHello(){       //function declaration
    cout<< "Hello! " <<endl; //function defination
}

int sayHi(string name){  
    cout<< "Hi, " <<name <<endl;  //function with parameters
}
int greet(string fname, string lname, int age){ //funtions with different parameters
    cout<< "Hi, " << fname << " "<< lname << ", Age: "<< age <<endl;  //function with parameteras
}

int main(){
   string firstName ,lastName, friendName;
   int Age;
   cout << "Enter your first name: ";
   cin>> firstName;
   cout << "Enter your last name: ";
   cin>> lastName;
   cout << "Enter your Age: ";
   cin>> Age;
   cout << "Enter your friend's name: ";
   cin>> friendName;

   sayHello(); //function call
   sayHi(firstName);   //function call with arguments
   sayHi(friendName);
   greet(firstName , lastName, Age);
}