#include <iostream>
using namespace std;

int main(){
    string food;
    char resp;
    int count;

    cout<<"Please enter a food you like: ";
    cin>>food;
    cout<<"Do you wish to continue (Y/N): ";
    cin>>resp;

    //Runs until the condition changes to N
    while (resp == 'Y')
    {
        count++;
        cout<<"Please enter a food you like: ";
        cin>>food;
        cout<<"Do you wish to continue (Y/N): ";
        cin>>resp;
    }
    cout<<"Count "<<count<<endl;
    return 0;
    
}