#include <iostream>
#include <chrono> //Library for getting the current time
#include <thread> //Library to enable multiple lines to run concurrently

using namespace std;

int main() {
    while (true) {
        cout << "Traffic Light Simulator" << endl;

        // Red light
        cout << "Red" << endl;
        this_thread::sleep_for(chrono::seconds(2)); // Red light for 2 seconds

        // Yellow light
        cout << "Yellow" << endl;
        this_thread::sleep_for(chrono::seconds(1)); // Yellow light for 1 second

        // Green light
        cout << "Green" << endl;
        this_thread::sleep_for(chrono::seconds(2)); // Green light for 2 seconds

        // Repeat the cycle
    }

    return 0;
}