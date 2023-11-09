#include <iostream>
#include <string>

using namespace std;

int main(){
    int num1, num2, opt;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"First number: "<<num1<<endl;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    cout<<"Second number: "<<num2<<endl;

    if(num1>num2){
        opt = 1;
    }else if(num2 > num1){
        opt = 2;
    }else{
        opt =3;
    }

    switch(opt){
        case 1:
        cout<<"The first number is larger"<<endl;
        break;

        case 2:
         cout<<"The second number is larger"<<endl;
         break;

        case 3:
         cout<<"The numbers are equal"<<endl;
    }

    return 0;

}