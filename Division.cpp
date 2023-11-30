#include "Functions.h"
#include <iostream>

using namespace std; 

int main()
{
    double val1,val2;
    cout<<"Enter the first number"<<endl;
    cin>>val1;
    cout<<"Enter the second number"<<endl;
    cin>>val2;

    cout<<"The division of "<<val1<<" and "<<val2<<" is "<<division(val1,val2);
    return 0;
}
