#include<iostream>
using namespace std;

class Bank{
    private:
        int balance=0;
    public:
    //Member data of a class
        string custName , custEmail;
        int acNumber;

        void createAccount(string cName, string cEmail){
            custName = cName;
            custEmail = cEmail;      
        }

        void displayInfo(){
            cout<< "Customer Name: "<< custName << endl;
            cout<< "Customer Email: "<< custEmail << endl;
        }
         // setter
        void addBalance(int account, int amount){
            balance+= amount;
            cout<< "The amount has been deposited successfully!"<<endl;
        }
         // setter
        void withdrawAmount(int account, int amount){
            balance-= amount;
            cout<< "The amount has been withdrawn successfully!"<<endl;
        }
        // getter

        void checkBalance(){
            cout<< "Bank Balance : "<< balance <<endl;       
        }
};

int main(){
    Bank cust1; //object declared
    string name , email;
    int acNum, amount;

    cust1.custName= "bhoomika";
    cust1.custEmail= "bhoomikabg@gmail.com";
    cust1.acNumber= 12345;
//  cust1.balance=9000; //we can't assign value to private member


    cout<< "Enter the name: ";
    cin>> name;
    cout<< "Enter your email id : ";
    cin>> email;
    cout<< "Enter the account number: ";
    cin>> acNum;
    cout<< "Enter the amount to be deposited: ";
    cin>> amount;

    cust1.createAccount(name, email);
    cust1.displayInfo();
    cust1.addBalance(acNum,amount);
    cust1.checkBalance();

    cout<< "Enter your amount to be withdraw: ";
    cin>> amount;
    cust1.withdrawAmount(acNum,amount);
    cust1.checkBalance();
}