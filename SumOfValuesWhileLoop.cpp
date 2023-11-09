#include <iostream>
using namespace std;

int main(){
    // print start message
    cout<<"A program to compute the sum of numbers "<<endl;
    
    // set initial values
    int value = 20, sum = 0;
    
    // calculate sum using a while loop
    while (value <= 25)
    {
        // add value to sum
        sum = sum + value;
        
        // increment value
        value++;
    }
    
    // print sum result
    cout<<"Sum of numbers from 20 to 25 is: "<<sum<<endl;
    
    // end program
    return 0;
}