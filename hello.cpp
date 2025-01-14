#include <iostream>
#include <cmath> // Use cmath for sqrt and pow functions
using namespace std;

int main() {
    float a = 3.1; // Values for a, b
    float b = 4.2;
    float x1, x2; // Variables for solutions
    int c; // Variable for c

    cout << "Enter value for c: " << endl; // Ask user to input value for c
    cin >> c;

    // Calculate the discriminant for the square root term
    float discriminant = (b * b - 4 * a * c);

    // Check if the discriminant is non-negative to avoid complex numbers
    if (discriminant >= 0) {
        // Calculate x1 and x2 using the given formula structure
        x1 = (-b + sqrt(discriminant)) / (pow(a / b, 2) + pow(b / c, 2)); // +ve root
        x2 = (-b - sqrt(discriminant)) / (pow(a / b, 2) + pow(b / c, 2)); // -ve root
        
        cout << "Formula result for +ve root (x1): " << x1 << endl;
        cout << "Formula result for -ve root (x2): " << x2 << endl;
    } else {
        cout << "The formula results in complex numbers for the given input." << endl;
    }

    return 0;
}

