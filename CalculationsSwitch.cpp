#include <iostream>
#include <cmath> //Math Library

using namespace std;

int main() {
    int choice;
    do {
        cout << "Menu:" << endl;
        cout << "1. Calculate the area of a circle" << endl;
        cout << "2. Calculate the area of a rectangle" << endl;
        cout << "3. Calculate the area of a triangle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1: //To do the Area of a Circle
                double radius, circleArea;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                circleArea = M_PI * pow(radius, 2); 
                cout << "Area of the circle is: " << circleArea << endl;
                break;
            case 2: //To perform the area of a rectangle
                double length, width, rectangleArea;
                cout << "Enter the length and width of the rectangle: ";
                cin >> length >> width;
                rectangleArea = length * width;
                cout << "Area of the rectangle is: " << rectangleArea << endl;
                break;
            case 3: //To perform the area of a triangle
                double base, height, triangleArea;
                cout << "Enter the base and height of the triangle: ";
                cin >> base >> height;
                triangleArea = 0.5 * base * height;
                cout << "Area of the triangle is: " << triangleArea << endl;
                break;
            case 4:
                cout << "Exiting program!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 4);

    return 0;
}