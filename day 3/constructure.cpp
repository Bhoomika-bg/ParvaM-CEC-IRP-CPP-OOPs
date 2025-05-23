#include<iostream>
using namespace std;

class Calculate{
    public:
        //member Data
        int num1, num2;
        float res;
        //Declare the constructure & it is also a default constructure (No parameters)
        //Member function
        //select , ctrl + ? : comment
        Calculate(){
            num1= 5;
            num2= 10;
        }

        //Member Funtion
        void showOutput(){
            cout<< "Addition: "<<num1+num2<<endl;
            cout<< "Subtraction: "<<num1-num2<<endl;
            cout<< "Multiplication: "<<num1*num2<<endl;
            cout<< "quotient: "<<num2/num1<<endl;   
            cout<< "Remainder: "<<num1%num2<<endl;   
        }
};

int main(){
    //Initializaing the default value using constructure automatically when object is declared
    Calculate c1;//object

    //Assigning the value to the data members
    Calculate c2;
    c2.num1 = 25;
    c2.num2 = 30;
    c1.showOutput();
    c2.showOutput();    
}