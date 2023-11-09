#include <iostream>
using namespace std;

int main(){
    string password = "StrathmoreUn1@"; // correct password
    string pass; // user's password input
    int trials = 0; // number of password attempts

    cout<<"Enter your password: \n";
    cin>>pass;

    // Check if password is correct, else ask for password again
    while (pass!=password)
    {
        cout<<"Enter your password again: \n";
        cin>>pass;
        trials++; // increment number of password attempts

        // Check if user has reached maximum attempts
        if(trials==3){
            cout<<"Password Blocked ";
            break; // exit the loop
        }
    }

    // If password is correct, display welcome message
    cout<<"Welcome!!";
}