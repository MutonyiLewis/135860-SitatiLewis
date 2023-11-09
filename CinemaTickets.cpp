#include <iostream>

using namespace std;

int main() {
    int age;
    char movieType;
    double ticketPrice = 0.0;

    cout << "Cinema Ticket Price Calculator" << endl;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter the type of movie (R for Regular, 3 for 3D): ";
    cin >> movieType;

    if (age < 0 || age > 120) {
        cout << "Invalid age. Please enter a valid age." << endl;
    } else {
        if (movieType == 'R' || movieType == 'r') {
            if (age < 18) {
                ticketPrice = 800; // Regular movie price for customers under 18
            } else {
                ticketPrice = 1200; // Regular movie price for customers 18 and older
            }
        } else if (movieType == '3' || movieType == '3') {
            if (age < 18) {
                ticketPrice = 1200; // 3D movie price for customers under 18
            } else {
                ticketPrice = 1500; // 3D movie price for customers 18 and older
            }
        } else {
            cout << "Invalid movie type entered. Please enter 'R' for Regular or '3' for 3D." << endl;
        }

        cout << "Ticket price: Ksh." << ticketPrice << endl;
    }

    return 0;
}