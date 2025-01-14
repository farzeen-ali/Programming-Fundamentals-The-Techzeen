#include <iostream>
#include <cmath> // For abs()
using namespace std;

// 1. Number Pyramid
void numberPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
}

// 2. Inverted Number Pyramid
void numberInvertedPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
}

// 3. Diamond
void diamond(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// 4. Snake Pattern
void snakePattern(int n) {
    int count = 1;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            // For odd rows, print numbers left to right
            for (int j = 1; j <= n; j++) {
                cout << count++ << " ";
            }
        } else {
            // For even rows, print numbers right to left
            int end = count + n - 1;
            for (int j = end; j >= count; j--) {
                cout << j << " ";
            }
            count = end + 1;
        }
        cout << endl;
    }
}

// 5. Unique Pattern
void diamondWithCrossPattern(int n) {
    int mid = (n + 1) / 2;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            //cross lines
            if ((j == mid) || (i == mid) || (j == mid - abs(mid - i)) || (j == mid + abs(mid - i))) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// Main function
int main() {
    int n = 5; // Size of the patterns
	
    cout << "1. Number Pyramid:" << endl;
    numberPyramid(n);
    cout << endl;

    cout << "2. Inverted Number Pyramid:" << endl;
    numberInvertedPyramid(n);
    cout << endl;

    cout << "3. Diamond:" << endl;
    diamond(n);
    cout << endl;

    cout << "4. Snake Pattern:" << endl;
    snakePattern(n);
    cout << endl;

    int num = 7; // Must be odd for symmetry
    cout << "5. Unique Pattern: Diamond with Cross Pattern" << endl;
    diamondWithCrossPattern(num);

    return 0;
}

