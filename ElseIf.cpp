#include <iostream>

using namespace std;

int main(){
    float age;
    cout<<"Enter the child's age in years: ";
    cin>>age;

    if(age>=7){
        cout<<"Admit to grade school";
    }else if(age>=5 && age<=6)
    {
        cout<<"Admit to Kindergaten";
    }else if (age>=3 && age<=4)
    {
        cout<<"Admit to Pre school";
    }else if (age>=1 && age<=2)
    {
        cout<<"Admit to Play Group";
    }else{
        cout<<"Reject";
    }
    return 0;
}