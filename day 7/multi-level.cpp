#include<iostream>
using namespace std;

class Person{
    private:
        string name;
        int age;

    public:
        void setPersonDetails(string n, int a){
            name = n;
            age = a;
        }

        void showPersonDetails(){
            cout<<"My name is "<<name<<" and I'm "<<age<<" years old. "<<endl;
        }
           
};

class Employee : public Person{ //person -> Employee
    private:
        string company_name, emp_id;

    public:
        void setEmployeeDetails(string compName,string empId){
            company_name=compName;
            emp_id=empId;
        }
        void showEmployeeDetails(){
            cout<< "I'm working in "<<company_name<<",My Employee ID is: "<<emp_id<<endl;
        }
};

class Developer : public Employee{ //person -> Employee ->Developer
    private:
        string deptName;
        int experience;

    public:
        void setDeveloperDetails(string dept,int exp){
          deptName=dept;
          experience=exp;
        }

        void showDeveloperDetails(){
             cout<<"I'll be working in "<<deptName<< " department. I've "<<experience
           <<" years of experience."<<endl;
        }
};

int main(){
    string person_name, company_name, dept_name, employee_id;
    int personAge, devExperience;

    cout<< "Enter your name & age: ";
    cin>>person_name>>personAge;

    cout<< "Enter your company name & Employee ID: ";
    cin>>company_name>>employee_id;

    cout<< "Enter your Department name & Years of experience: ";
    cin>>dept_name>>devExperience;

    Developer dev1; //Object of Developer Class
    // dev1.name - connot access private member out of the class(person)
    // dev1.company_name - connot access private member out of the class(Employee)
    // dev1.deptName - connot access private member out of the class(Developer)

    dev1.setPersonDetails(person_name, personAge);

    dev1.setEmployeeDetails(company_name, employee_id);
    
    dev1.setDeveloperDetails(dept_name, devExperience);

    dev1.showPersonDetails();
    dev1.showEmployeeDetails();
    dev1.showDeveloperDetails();
}
