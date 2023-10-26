#include <iostream>
using namespace std;

int main(){
    int num1 =10, num2 = 30;
    bool var1=true, var2 = false;

    cout<<"Sum of the two numbers: "<<num1 + num2<< endl;
    cout<<"Difference of the two numbers: "<<num1 - num2<<endl;
    cout<<"Product of the two numbers: "<<num1 * num2<<endl;
    cout<<"Division of the two numbers: "<<(float)(num1/num2)<<endl;
    cout<<"Modulus of the two numbers: "<<num1 % num2<<endl;
    cout<<"Increment of the number num1: "<<++num1<<endl;
    cout<<"Decrement of the number num1: "<<--num1<<endl;
    cout<<"Comparing the 2 numbers: \n";
    cout<<"greater than "<<num2<<" is greater than "<<" = " <<(bool)(num2 > num1)<<endl;
    cout<<"less than "<<num2 << " is less than "<<" = " <<(bool)(num2 < num1)<<endl;
    cout<<"Equal to "<<num2 << " is equal to "<<" = " <<(bool)(num2 == num1)<<endl;
    cout<<"not equal to "<<num2 << " not equal to "<<" = " <<(bool)(num2 != num1)<<endl;

    //Booleans 
    cout<<var1<< " && "<<var2<< "=" << (var1 && var2)<<endl;
    cout<<var1<< " || "<<var2<< "=" << (var1 || var2)<<endl;
    cout<<" ! "<<var1<< "=" << (!var1)<<endl;

}