#include <vector>
#include <iostream>
using namespace std;

int main() {
    const int NUM_ELEMENTS = 8;   // Number of elements
    vector<int> revVctr(NUM_ELEMENTS);               // User values
    int i;
    int tempVal = 0;// Loop index

    cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cin >> revVctr.at(i);
    }

    // Reverse

    for (i = 0; i < NUM_ELEMENTS / 2; ++i) {
        tempVal = revVctr.at(NUM_ELEMENTS - 1 - i);
        revVctr.at(NUM_ELEMENTS - 1 - i) = revVctr.at(i);
        revVctr.at(i) = tempVal;
        // Swap
    }

    // Print values
    cout << endl << "New values: ";
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cout << " " << revVctr.at(i);
    }
    cout << endl;

    return 0;
}