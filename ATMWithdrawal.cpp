#include <iostream>

using namespace std;

int main() {
    double accountBalance = 100000.0; // Example account balance
    double withdrawalAmount;
    double dailyWithdrawalLimit = 2500.0; // Example daily withdrawal limit
    double availableDailyLimit = dailyWithdrawalLimit;

    cout << "ATM Withdrawal Program" << endl;

    cout << "Enter the withdrawal amount: Ksh.";
    cin >> withdrawalAmount;

    if (withdrawalAmount <= 0) {
        cout << "Invalid withdrawal amount. Please enter a valid amount." << endl;
    } else if (withdrawalAmount > availableDailyLimit) {
        cout << "Withdrawal amount exceeds the daily limit. Please enter a smaller amount." << endl;
    } else if (withdrawalAmount > accountBalance) {
        cout << "Insufficient funds. Your account balance is not enough for this withdrawal." << endl;
    } else {
        // Successful withdrawal
        accountBalance -= withdrawalAmount;
        availableDailyLimit -= withdrawalAmount;
        cout << "Withdrawal successful. Your new account balance is: Ksh." << accountBalance << endl;
        cout << "Remaining daily withdrawal limit: Ksh." << availableDailyLimit << endl;
    }

    return 0;
}