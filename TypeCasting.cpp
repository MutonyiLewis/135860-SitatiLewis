#include <iostream>
#include <string>

using namespace std;

// int main(){
//     double myNum=15.5;
//     int myNewNum = int(myNum);
//     cout<<"The output "<<myNewNum;

//     return 0;  
// }

int main(){
    double myNum=15.5;
    int myNewNum = int(myNum);
    cout<<"The output "<<myNewNum<<"\n";
    char myChar;
    int myInt = 45;
    float myFloat = 4.567;
    int myNum1;
    myChar = static_cast<char>(myInt); //Int to char
    myNum1 = static_cast<int>(myFloat); //Float to int

    cout<<"My Character is "<<myChar<<"\n";
    cout<<"My Number is "<<myNum1<<"\n";
}
