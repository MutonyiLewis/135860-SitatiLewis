#include <iostream>
#include <string>

using namespace std;

int main(){
    //Data input using cin
    string firstName, lastName, fullName, favouriteMeal, favouriteMovie,university, courseName;
    cout<<"Enter your first name: "<<endl;
    getline(cin, firstName);
    cout<<"Enter your last name: "<<endl;
    getline(cin, lastName);
    cout<<"Enter your full name: "<<endl;
    getline(cin, fullName);
    cout<<"Enter your favourite meal: "<<endl;
    getline(cin, favouriteMeal);
    cout<<"Enter your favourite movie: "<<endl;
    getline(cin, favouriteMovie);
    cout<<"Enter your University: "<<endl;
    getline(cin, university);
    cout<<"Enter your course name: "<<endl;
    getline(cin, courseName);
    
    cout<<"----------------------------------------"<<endl;

    cout<<"First Name: "<<firstName<<endl;
    cout<<"Last Name: "<<lastName<<endl;
    cout<<"Last Name: "<<fullName<<endl;
    cout<<"Favourite Meal: "<<favouriteMeal<<endl;
    cout<<"Favourite Movie: "<<favouriteMovie<<endl;
    cout<<"University: "<<university<<endl;
    cout<<"Course Name: "<<courseName<<endl;
    return 0;
}