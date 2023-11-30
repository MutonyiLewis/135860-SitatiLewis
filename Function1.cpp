#include <iostream>
#include <string>

using namespace std;

int add(int, int); //funtion prototype

int main(){
    int var1 = 2, var2 = 3;
    cout << "The sum of the two numbers is: ";
    cout<< add(var1,var2); //function call
    return 0;
}

int add(int a, int b){ //function defination
    return a+b;
}