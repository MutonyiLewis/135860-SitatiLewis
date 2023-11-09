#include <iostream>
using namespace std;

int main(){

    cout<<"A simple program to output even numbers between and including 12 and 28";
    cout<<"Using for loop \n";
    cout << "Numbers: ";

    // Initialize loop variable, iterate even numbers from 12 to 28
    for(int num = 12; num <=28; num +=2){
        cout<<num<<", ";
    }
    
    return 0;
}