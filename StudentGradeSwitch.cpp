#include <iostream>
#include <string>

using namespace std;

int main(){
    int Grade;//Option for switch
    string fullName, course;
    cout<<"Enter the Student's fullname: "<<endl;
    getline(cin, fullName);
    cout<<"Enter the Student's Course: "<<endl;
    getline(cin, course);
    cout<<"Enter the Student's grade"<<endl;
    cin>>Grade;
    int opt;
    if(Grade>=70){
        opt = 1;
    }else if (Grade>=60 && Grade<=69)
    {
        opt = 2;
    }else if (Grade>=50 && Grade<=59)
    {
        opt = 3;
    }else if (Grade>=40 && Grade<=49)
    {
        opt = 4;
    }else if (Grade<40)
    {
        opt = 5;
    }else{
        opt = 6;
    }

    switch(opt){
        case 1: //when is greater than 70
        cout<<"Student Name: "<<fullName<<endl;
        cout<<"Student Course: "<<course<<endl;
        cout<<fullName<<"'s grade is A."<<endl;
        break;

        case 2: //when is greater than 60 & less than 69
        cout<<"Student Name: "<<fullName<<endl;
        cout<<"Student Course: "<<course<<endl;
        cout<<fullName<<"'s grade is B."<<endl;
        break;

        case 3: //when is greater than 50 & less than 59
        cout<<"Student Name: "<<fullName<<endl;
        cout<<"Student Course: "<<course<<endl;
        cout<<fullName<<"'s grade is C."<<endl;
        break;

        case 4: //when is greater than 40 & less than 49
        cout<<"Student Name: "<<fullName<<endl;
        cout<<"Student Course: "<<course<<endl;
        cout<<fullName<<"'s grade is D."<<endl;
        break;

        case 5: //when is less than 40
        cout<<"Student Name: "<<fullName<<endl;
        cout<<"Student Course: "<<course<<endl;
        cout<<fullName<<"'s grade is F."<<endl;
        break;

        case 6: //when input is invalid
        cout<<"Student Name: "<<fullName<<endl;
        cout<<"Student Course: "<<course<<endl;
        cout<<fullName<<" marks are invalid."<<endl;
        break;

    }

    return 0;
}