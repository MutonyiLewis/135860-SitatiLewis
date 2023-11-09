#include <iostream>
using namespace std;

#include <iostream>

int main() {
    int num;
    int sum = 0;

    cout << "Enter integers (0 to stop): ";

    // Loop to accept user inputs
    do{
       cin >> num;

        // Exit loop if user enters 0
        if (num == 0) {
            break;
        }

        // Add number to the sum
        sum += num; 
    }
    while (true);

    cout << "The sum of integers is: " << sum << endl;

    return 0;
}