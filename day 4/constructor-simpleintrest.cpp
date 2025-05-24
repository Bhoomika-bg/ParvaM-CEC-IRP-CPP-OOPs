#include<iostream>
using namespace std;

class Intrest{
    private:
        int principal,term,rate,totalIntrest;
        float rateInPercent;

    public:
       int simpleIntrest=0;
       Intrest(){//default constructor
         principal=0;
         term=0;
         rate=0;
         totalIntrest=0;
         rateInPercent=0;
         cout<< "Total Intrest Earned: "<<totalIntrest<<endl;
       }
       void setValues(int a, int y){ //setter function
        principal= a;
        term=y;
       }
       void setRateValueInteger(int rateInInteger){//setter function
        rate= rateInInteger;
       }
       void setRateValueFloat(float rateInFloat){//setter function
        rateInPercent= rateInFloat;
       }
 
       Intrest(int p, int t, int r){
        setValues(p,t);
        setRateValueInteger(r);
        simpleIntrest=(principal*term*rate)/100;
        cout<<"Simple Intrest for the following  Details: "<< endl;
        cout<<"Principal Amount: "<<principal<< endl;
        cout<<"No. of years(term): "<<term<< endl;
        cout<<"Rate of Intrest(in Integer): "<<rate<< endl;
        totalIntrest=principal +simpleIntrest;
        cout<<"Total Intrest Earned: "<<totalIntrest<< endl;
       }

       Intrest(int p, int t, float rateInDecimal){
        setValues(p,t);
        setRateValueFloat(rateInDecimal);
        simpleIntrest=(principal*term*rateInDecimal);
        cout<<"Simple Intrest for the following  Details: "<< endl;
        cout<<"Principal Amount: "<<principal<< endl;
        cout<<"No. of years(term): "<<term<< endl;
        cout<<"Rate of Intrest(in Decimal): "<<rate<< endl;
        totalIntrest=principal +simpleIntrest;
        cout<<"Total Intrest Earned: "<<totalIntrest<< endl;
       }

       ~Intrest(){ //automatically called to free up the memory used by constructor when object has lost the scope
        cout<<" Destructor has been called to destroy or free ut the memory used by constructor"<<endl;
       }
       
};

int main(){
    int amount, year, rateOfIntrest;
    float intrestRate;

    Intrest int1; //default constructor

    Intrest int4; //default constructor

    cout<< "Enter the principal amount, No of years & Rate of Intrest(eg. 5): ";
    cin>> amount>> year>>rateOfIntrest;

    Intrest int2(amount,year,rateOfIntrest);

    cout<< "Enter the principal amount, No of years & Rate of Intrest(eg. 5): ";
    cin>> amount>> year>>rateOfIntrest;

    Intrest int3(amount,year,rateOfIntrest);
}