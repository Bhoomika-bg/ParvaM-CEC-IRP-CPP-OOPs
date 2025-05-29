#include<iostream>
using namespace std;

class Name{
    private:
        string name,branch;
        int sem;
    public:
        void setName(string n){
            name=n;
        }
        // As the parameter and private member name is same, it will asssign some garbage value 
        //To avoid the issue, we can use "this" keyword to assign the parameter value to private member
        void setDetails(string branch , int sem){
            this->branch=branch;
            this->sem=sem;
        }

        void showName(){
            cout<< "Your Name is "<<name<<endl;
        }

        void showDetails(){
            cout<< "You're from "<<branch<< " branch, and you're studying in "<<sem<<" sem. "<<endl;
        }
};

int main(){
    string studentName , studentBranch;
    int studentSem;

    cout<<"Enter your name , branch & sem: ";
    cin>>studentName>>studentBranch>>studentSem;

    Name name1;
    name1.setName(studentName);
    name1.setDetails(studentBranch,studentSem);
    name1.showName();
    name1.showDetails();
}