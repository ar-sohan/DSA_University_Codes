#include <iostream>
using namespace std;

int main() {
    int A[10] = {8, 4, 6, 1, 6, 9, 6, 1, 9, 8};


    for (int i = 0; i < 10; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    int number;
    cout << "Input any number to search: ";
    cin >> number;

    int occure = 0;
    for (int i = 0; i < 10; ++i) {
        if (A[i] == number) {
            ++occure;
        }
    }


    cout << "The number was repeated  : " << occure  << endl;

    return 0;
}

