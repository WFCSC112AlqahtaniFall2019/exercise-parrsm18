#include <iostream>
using namespace std;

int main() {
    const int NUM_ELEMENTS = 8;   // Number of elements
    int revVctr[8];               // User values
    int i;
    int tempVal = 0;// Loop index

    cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cin >> revVctr[i];
    }

    // Reverse
    for (i = 0; i < NUM_ELEMENTS / 2; ++i) {
        tempVal = revVctr[NUM_ELEMENTS - 1 - i];
        revVctr[NUM_ELEMENTS - 1 - i] = revVctr[i];
        revVctr[i] = tempVal;
        // Swap
    }

    // Print values
    cout << endl << "New values: ";
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cout << " " << revVctr[i];
    }
    cout << endl;

    return 0;
}