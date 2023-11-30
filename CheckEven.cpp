#include "Functions.h" //Call header file 
#include <iostream>

using namespace std;

int main(){
    //initialize variables
    char resp;
    do{
    int num;
    //Get user input
    cout << "Enter a number: "<<endl;
    cin>>num;
    //Return true or false
    cout<<"Is "<<num<<" even? "<<checkEven(num)<<endl;
    cout<<"Do you wish to check another number? Y/N"<<endl;
    cin >> resp;
    }while (resp == 'Y');
    
    return 0;
}