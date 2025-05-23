#include<iostream>
using namespace std;

int main(){
    //declaring variables with different datatypes
    string name, college, branch , usn;
    char section;
    int age, sem;
    bool isStudent;
    float height;
    // initiallizing/assigning the values to the variables
    name="Bhoomika bg";
    section = 'A';
    age= 24;
    college= "CEC";
    branch="AIML";
    usn="1CE24AI015";
    sem=2;
    isStudent=true;
    height=5.2;
    cout<<"Name: "<< name << endl;
    cout<<"Age: "<< age << endl;
    cout<<"college: "<< college << " , Branch: "<< branch << endl;
    cout<<"USN: "<< usn <<" , sem: " << sem << endl;
    cout<<"section:"<< section << " is he/she a student: " << isStudent << endl;
    //shift+alt+bottom aroow=clone
    //ctrl + shift + `= open new terminal
    //g++ variables.cpp
}