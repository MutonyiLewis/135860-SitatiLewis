/*
Created by Sitati Lewis Mutonyi
Title: Student @SU
Email: lewis.sitati@strathmore.edu
*/

//preprocessor directives
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, city,email;
    int age;

    cout << "Enter a name ";
    cin >> name;
    cout << "Enter your age ";
    cin >> age;
    cout<< "Enter your City ";
    cin >> city;
    cout<<"Enter Email ";
    cin >> email;
    cout<<"\n\n";

    cout << ".................My Profile Page................... \n\n";
    cout << "Name: " <<name<< endl;
    cout << "Age: " <<age<< endl;
    cout << "City: " <<city<< endl;
    cout << "Email: " <<email<< endl;
    cout<<"\n\n";
    //cerr << "This is an example of an error message \n";
    cout << ".................................................." <<endl;
    return 0;
}