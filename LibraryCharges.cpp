#include <iostream>

using namespace std;

int main() {
    int daysLate;
    char bookType;
    double fine = 0.0;

    cout << "Library Late Fee Calculator" << endl;

    cout << "Enter the number of days the book is late: ";
    cin >> daysLate;

    cout << "Enter the type of book (R for Regular, C for Children's, or P for Reference): ";
    cin >> bookType;

    if (daysLate <= 0) {
        cout << "No late fee. The book is not late." << endl;
    } else {
        if (bookType == 'R' || bookType == 'r') {
            fine = 5 * daysLate; // Regular book fine rate
        } else if (bookType == 'C' || bookType == 'c') {
            fine = 2.5 * daysLate; // Children's book fine rate
        } else if (bookType == 'P' || bookType == 'p') {
            fine = 10 * daysLate; // Reference book fine rate
        } else {
            cout << "Invalid book type entered." << endl;
        }

        if (fine > 0) {
            cout << "The late fee for the " << bookType << " book is Ksh." << fine << endl;
        }
    }

    return 0;
}