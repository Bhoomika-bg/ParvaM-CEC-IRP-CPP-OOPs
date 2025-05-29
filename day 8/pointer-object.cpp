#include<iostream>
using namespace std;

class Employee{
    private:
        string employeeID, employeeName;
        int experience;
        float salary;

    public:
        void addDetails(string id, string name, int exp, float salary){
            employeeID=id;
            employeeName=name;
            experience=exp;
            this->salary=salary;
        }

        void showDetails(){
            cout<< "The employee with name "<<employeeName<<" bearing "<<employeeID<<" having "
            <<experience<< " years of experience and receives a salary of Rs, "<<salary<<"/-"<<endl;
        }
};

int main(){
    string empName, empID;
    int empExp;
    float empSalary;

    cout<< "Enter your Name, Emploee-ID, years of Experience & Salary : ";
    cin>>empName>>empID>>empExp>>empSalary;

    Employee emp1; //Object created
    Employee *empPtr = &emp1; //pointer is pointing/ refering to the object emp1

    //using the pointer we are assigning the value to the object using pointer Dereferencing & Arrow operator
    (*empPtr).addDetails(empID,empName, empExp,empSalary);
    (*empPtr).showDetails();
    
    //using the pointer we are assigning the value to the object using pointer Dereferencing & Arrow operator
    empPtr->addDetails(empID,empName, empExp,empSalary);
    empPtr->showDetails();

    // Dynamically allocating for the pointer object( no object refered)
    // syntax: className *pointer_name = new className`
    Employee *ptrEmp = new Employee; 
    ptrEmp->addDetails("PM123","bhoomika",3 , 300000);
    ptrEmp->showDetails();
    // emp1.addDetails <==> (*empPtr).addDetails <==> empPtr-> adddetails
}