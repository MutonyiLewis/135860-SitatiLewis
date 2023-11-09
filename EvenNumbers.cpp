#include <iostream>
using namespace std;

int main(){
    cout<<"A program to output even numbers between 12 and 50. \n\n";
    int num = 12;

    do
    {
        cout << num <<", ";
        num++;
    } while (num <= 50);
    
    return 0;
    
    
}