//Question: Declare an integer variable, create a pointer to it, and print its value using both the variable and the pointer.

#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int* ptr = &num;

    cout << "Value of num: " << num << endl;
    cout << "Value of num using pointer: " << *ptr << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Address stored in pointer: " << ptr << endl;

    return 0;
}

//2. Pointer Arithmetic
//Question: Create an array and use a pointer to print all its elements using pointer arithmetic.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr;

    cout << "Array elements using pointer arithmetic:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }

    return 0;
}

//3. Null Pointer
//Question: Demonstrate the use of a null pointer.

#include <iostream>
using namespace std;

int main() {
    int* ptr = nullptr;  // Null pointer

    if (ptr == nullptr) {
        cout << "Pointer is null!" << endl;
    } else {
        cout << "Pointer is not null!" << endl;
    }

    return 0;
}
//4. Pointer to Pointer
//Question: Create a pointer to a pointer and print the value of a variable using it.

#include <iostream>
using namespace std;

int main() {
    int num = 20;
    int* ptr = &num;
    int** ptr2 = &ptr;

    cout << "Value of num: " << num << endl;
    cout << "Value of num using single pointer: " << *ptr << endl;
    cout << "Value of num using double pointer: " << **ptr2 << endl;

    return 0;
}

//5. Dynamic Memory Allocation
//Question: Dynamically allocate memory for an integer, assign a value, and then deallocate the memory.

#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;  // Allocate memory
    *ptr = 42;  // Assign value

    cout << "Value stored in dynamically allocated memory: " << *ptr << endl;

    delete ptr;  // Deallocate memory
    ptr = nullptr;  // Avoid dangling pointer

    return 0;
}
//6. Swapping Two Variables Using Pointers
//Question: Write a function to swap two variables using pointers.

#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}
//7. Pointers with Functions
//Question: Write a function that modifies a variable using a pointer.

#include <iostream>
using namespace std;

void modify(int* ptr) {
    *ptr = 100;
}

int main() {
    int num = 10;

    cout << "Before modify: num = " << num << endl;
    modify(&num);
    cout << "After modify: num = " << num << endl;

    return 0;
}
//8. Pointer and Character Array (String)
//Question: Use a pointer to print a string character by character.

#include <iostream>
using namespace std;

int main() {
    char str[] = "Hello, World!";
    char* ptr = str;

    cout << "String using pointer:" << endl;
    while (*ptr != '\0') {
        cout << *ptr;
        ptr++;
    }

    return 0;
}
//9. Pointer to Array
//Question: Print all elements of an array using a pointer.
//

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr;

    cout << "Array elements using pointer:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << ptr[i] << " ";
    }

    return 0;
}
