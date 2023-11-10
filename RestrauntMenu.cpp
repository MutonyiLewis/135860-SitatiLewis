#include <iostream>
#include <string>
using namespace std;

int main() {
   // Declare variables
   int choice;
   double totalCost = 0.0;

   // Display the menu
   cout << "Welcome to our restaurant!" << endl;
   cout << "Here is our menu:" << endl;
   cout << "1. Burger and fries - Ksh.1099" << endl;
   cout << "2. Pizza and salad - Ksh.1299" << endl;
   cout << "3. Chicken and vegetables - Ksh.1199" << endl;
   cout << "4. Fish and chips - Ksh.1399" << endl;

   // Get the user's choice
   cout << "Please enter your choice (1-4): ";
   cin >> choice;

   // Switch case to determine the total cost
   switch (choice) {
       case 1:
           totalCost += 1099;
           break;
       case 2:
           totalCost += 1299;
           break;
       case 3:
           totalCost += 1199;
           break;
       case 4:
           totalCost += 1399;
           break;
       default:
           cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
           break;
           }

   // Display the selected food items, their costs, and total bill
   cout << "You selected the following food items:" << endl;
   switch (choice) {
       case 1:
           cout << "Burger and fries - Ksh.1099" << endl;
           break;
       case 2:
           cout << "Pizza and salad - Ksh.1299" << endl;
           break;
       case 3:
       cout << "Chicken and vegetables - Ksh.1199" << endl;
           break;
       case 4:
           cout << "Fish and chips - Ksh.1399" << endl;
           break;
   }

   cout << "Your total bill is Ksh." << totalCost << endl;

   return 0;
}