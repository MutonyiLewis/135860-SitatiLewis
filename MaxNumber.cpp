#include "Functions.h" //Call header file 
#include <iostream>

using namespace std;

int main(){
    //initialize variables
    double num1, num2, num3;
    //Get user input
    cout << "Enter the first number: "<<endl;
    cin>>num1;
    cout << "Enter the second number: "<<endl;
    cin>>num2;
    cout << "Enter the third number: "<<endl;
    cin>>num3;
    //Return true or false
    cout<<"The maximum number of the input is: "<<maxNumber(num1,num2,num3)<<endl;
    return 0;
}