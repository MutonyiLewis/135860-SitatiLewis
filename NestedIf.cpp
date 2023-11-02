#include <iostream>
#include <string>

using namespace std;

int main(){
    int age;
    string interest, dance;

    cout<<"Enter age: ";
    cin>>age;

    if (age>=4 && age<=10){
        cout<<"Enter the child's interest: (football, art, dance): ";
        cin>>interest;
    if (interest == "football")
    {
        cout<<"\nAssign to soccer play group \t | o |\n";
    }
    if (interest == "art")
    {
        cout<<"\nAssign to art play group \t  |'_'|\n";
    }
    if (interest == "dance")
    {
        cout<<"\nAssign to dance play group \t o-|-/\n";
    }else{
        cout<<"\nAssign to other play group\n";
    }
    }
    else{
        cerr<<"\nThe child can't join \n";
    }
    return 0;
    
}