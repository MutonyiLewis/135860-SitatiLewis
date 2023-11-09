#include <iostream>

using namespace std;

int main(){
    int sum = 0, value = 20; // initialize sum and value

    do
    {
        sum = sum + value; // calculate sum
        value++; // increment value
    } while (value<=25); // repeat until value > 25

    cout<<"The sum is: "<<sum<<endl; // display the sum
    return 0; // end program
}