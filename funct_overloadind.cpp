#include <iostream>
using namespace std;

// Function 1: Takes an integer
void print(int i) {
    cout << "Printing integer: " << i << endl;
}

// Function 2: Takes a double (Different parameter type)
void print(double f) {
    cout << "Printing float: " << f << endl;
}

// Function 3: Takes two integers (Different number of parameters)
void print(int a, int b) {
    cout << "Printing sum: " << a + b << endl;
}

int main() {
    print(5);        // Calls Function 1
    print(5.5);      // Calls Function 2
    print(2, 3);     // Calls Function 3
    return 0;
}