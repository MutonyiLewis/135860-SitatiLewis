#include <iostream>
#include <string>

using namespace std;

int main(){
    //Age above 22, bank balance above 50,000, CRB good, Customer months >6
    int age, bank_balance, customer_months;
    string crb_status;

//Get customer input
    cout<<"Enter your bank details below: \n";
    cout<<"Enter your age: \n";
    cin>>age;
    cout<<"Enter your bank_balance: \n";
    cin>>bank_balance;
    cout<<"Enter the months you've been a customer \n";
    cin>>customer_months;
    cout<<"Enter your CRB status (Good, Bad): ";
    cin>>crb_status;

//Check if conditions are satisfied
    if (age>=22)
    {
        if (bank_balance>=50000)
        {
            if (customer_months>=6)
            {
                if (crb_status == "Good")
                {
                    cout<<"Your loan has been approved!!";
                }else{cout<<"Reject!!";}
            }
        }else{cout<<"Reject!!";}
    }else{
        cout<<"Your loan application has been rejected!!";
    }
    return 0;
}