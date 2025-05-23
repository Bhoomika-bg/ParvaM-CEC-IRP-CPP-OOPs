#include<iostream>
using namespace std;

class Company{
    private:
         string cin;
         int totalWorth=0;

    public:
         string gstNum, location;
         int numOfEmp;
        //setter method
         void setDetails(string cinNum,int worth){
            cin= cinNum;
            totalWorth= worth;
         }

         //getter method
         void getDetails(string gstNumber){
            cout<< "Corporate Identity Number: "<<cin<< endl;
            cout<< "Total worth of thae Company: "<<totalWorth<< endl;
         }

         void getBasicDetails(); //declare the member function

};

//function definition outside the class
//synatx: return_type class_name :: member_function
void Company :: getBasicDetails(){ //scope Resolution operator
    cout<< "GST Number "<<gstNum<<endl;
    cout<< "Location: "<<location<<endl;
    cout<< "Number of Employee: "<<numOfEmp<<endl;
}

int main(){
    Company comp1; //Object created
    comp1.gstNum = "1234abcd678";
    comp1.location = "Bengaluru";
    comp1.numOfEmp = 50;
    comp1.getBasicDetails();

    string cinNumber;
    int companyWorth;
    
    cinNumber= "9876arlt789";
    companyWorth= 5000000;

    comp1.setDetails(cinNumber, companyWorth);
    comp1.getDetails(comp1.gstNum);

}