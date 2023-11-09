#include <iostream>
#include <string>

using namespace std;

int main(){
    int Grade;
    string fullName, course;
    cout<<"Enter the Student's fullname: "<<endl;
    getline(cin, fullName);
    cout<<"Enter the Student's Course: "<<endl;
    getline(cin, course);
    cout<<"Enter the Student's grade"<<endl;
    cin>>Grade;

    cout<<"Student Name: "<<fullName<<endl;
    cout<<"Course Name: "<<course<<endl;
    if(Grade>=70){
        cout<<fullName<<"'s grade is A."<<endl;
    }else if (Grade>=60 && Grade<=69)
    {
        cout<<fullName<<"'s grade is B."<<endl;
    }else if (Grade>=50 && Grade<=59)
    {
        cout<<fullName<<"'s grade is C."<<endl;
    }else if (Grade>=40 && Grade<=49)
    {
        cout<<fullName<<"'s grade is D."<<endl;
    }else if (Grade<40)
    {
        cout<<fullName<<"'s grade is F."<<endl;
    }else{
        cout<<"Invalid Score";
    }

    return 0;
    
}