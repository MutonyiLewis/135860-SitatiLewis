#include <iostream>

using namespace std;

int main() {
    double purchaseAmount;
    double discount = 0.0;
    
    cout << "Shopping Cart Total Cost Calculator" << endl;

    cout << "Enter the total purchase amount: Ksh.";
    cin >> purchaseAmount;

    if (purchaseAmount <= 0) {
        cout << "Invalid purchase amount. Please enter a valid amount." << endl;
    } else {
        if (purchaseAmount < 50) {
            discount = 0; // No discount for purchases under Ksh.50
        } else if (purchaseAmount < 100) {
            discount = 0.1; // 10% discount for purchases between Ksh.50 and Ksh.99.99
        } else if (purchaseAmount < 200) {
            discount = 0.15; // 15% discount for purchases between Ksh.100 and Ksh.199.99
        } else {
            discount = 0.2; // 20% discount for purchases of Ksh.200 or more
        }

        double totalCost = purchaseAmount - (purchaseAmount * discount);

        cout << "Original purchase amount: Ksh." << purchaseAmount << endl;
        cout << "Discount applied: " << (discount * 100) << "%" << endl;
        cout << "Total cost after discount: Ksh." << totalCost << endl;
    }

    return 0;
}