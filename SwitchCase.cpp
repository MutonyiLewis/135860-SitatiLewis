#include <iostream>
#include <string>

using namespace std;

int main(){
    int opt; //Switch case var
    cout<<"This is yoour bbit sem 1 tt sep-dec 2023";
    cout<<"\n1. Monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday"<<endl;
    cout<<"Select a day of choice (eg 1,2,3,4,5)"<<endl;
    cin>>opt;


    
    switch(opt)
    {
        case 1: //When 1 is selected
        cout<<"Monday Classes...........\n";
        cout<<"\t1. BBIT 1106:Math for Business"<<endl;
        cout<<"\t2. BBIT 1102:Intro to Programs"<<endl;
        break;

        case 2: //When 2 is selected
        cout<<"Tuesday Classes...........\n";
        cout<<"\t1. BBIT 1102:Intro to Programs"<<endl;
        cout<<"\t2. BBIT 1104:Intro to Ethics"<<endl;
        break;

        case 3: //When 3 is selected
        cout<<"Wednesday Classes...........\n";
        cout<<"\t1. BBIT 1106:Math for Business"<<endl;
        cout<<"\t2. BBIT 1102:Theology"<<endl;
        cout<<"\t3. BBIT 1101:Fundamentals of IT"<<endl;
        break;

        case 4: //When 4 is selected
        cout<<"Thursday Classes...........\n";
        cout<<"\t1. BBIT 1105:Accounting"<<endl;
        cout<<"\t2. BBIT 1101:Fundamentals of IT"<<endl;
        break;

        case 5: //When 5 is selected
        cout<<"Friday Classes...........\n";
        cout<<"\t1. BBIT 1106:Math for Business"<<endl;
        cout<<"\t2. BBIT 1102:Intro to Programs"<<endl;
        break;

        default:
        cout<<"The input is invalid";
    }
    return 0;
}