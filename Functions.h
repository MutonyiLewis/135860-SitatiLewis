#include <string>
#include <iostream>
using namespace std;

double division(double val1, double val2){
    return val1/val2;
}

double myTriangle(double height, double base){
    return 0.5*height*base;
}

string checkEven(int num){
    string result = (num % 2 == 0)?"True":"False";
    return result;
}

double maxNumber(double num1, double num2, double num3){
    double result;
    if(num1 > num2 && num1 > num3){
        result =  num1;
        return result;
    }else if (num2 > num1 && num2 > num3)
    {
        result = num2;
        return result;
    }else if (num3 > num1 && num3 > num2)
    {
        result = num3;
        return result;
    }else{
        cout<<"They are equal ";
        return 0;
    }
}