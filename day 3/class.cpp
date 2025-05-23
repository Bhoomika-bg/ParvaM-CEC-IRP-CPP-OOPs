#include<iostream>
using namespace std;
 // syntax
 //class class_name  //class declaration
 class Student {
    public:
    //blueprint
    string name,college,branch; //data
    int sem;

    void show(){  //member function
        cout<< "Name: " <<name<< endl;
        cout<< "College: " << college <<endl;
        cout<< "Branch : " <<branch<< endl;
        cout<< "semester: " <<sem<< endl;
    }
 };

 int main(){
    Student student1; //object creation
    student1.name = "Bhoomika";//assigning the value to the class using object
    student1.college = "CEC";
    student1.branch = "AIML";
    student1.sem = 8;

    //ctrl+d:sellection of same pattern

    Student student2; //object creation
    student2.name = "Bhoomika";//assigning the value to the class using object
    student2.college = "CEC";
    student2.branch = "AIML";
    student2.sem = 8;

    student1.show();
    student2.show();
 }
 
