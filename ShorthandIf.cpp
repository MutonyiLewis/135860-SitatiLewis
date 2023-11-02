#include <iostream>
#include <string>

using namespace std;

int main(){
    int age;
    cout<<"Enter the Age ";
    cin>>age;

    string message =(age>=40)?"Admitted! Proceed to registration":"Declined!!Minimum age not reached";
    cout<<message;
    return 0;
}