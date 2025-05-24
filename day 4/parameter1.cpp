#include<iostream>
using namespace std;

class Wish{
    private:
    string name;
    int age;

    public:
         Wish(){  //default constructor
            name = "Unknown";
            age=0;
         }

         Wish(string n , int a);// parameterized constructor

         void birthdayWishes();
           
};

//declaring the rules of parameterized constructor outside the class using scope resolution operator
Wish :: Wish(string n , int a){ //syntax: classname :: constructor(parameters) (no written type required)
    name = n;
    age= a;
}

//declaring the member function outside the class using scope resolution operator
 void Wish :: birthdayWishes(){ //syntax: return_type classname :: member_function(parameters)[return_type is must]
                cout<< "Happy Birthday "<< name<< " ! Now you're " << age << " years old. "<<endl;
            }

int main(){
    string personName;
    int personAge;

    Wish person1; //object declared
    person1.birthdayWishes();

    cout<< " Enter your name: ";
    cin>>personName;
    cout<< " Enter your age: ";
    cin>> personAge;

    Wish person2(personName , personAge);
    person2.birthdayWishes();
}