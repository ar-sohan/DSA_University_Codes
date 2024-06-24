#include <iostream>
using namespace std;

int main() {
    int A[10] = {8, 4, 6, 1, 6, 9, 6, 1, 9, 8};

    for (int i = 0; i < 10; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    bool counted[10] = {false};

    for (int i = 0; i < 10; ++i) {
        if (!counted[i]) {
            int count = 0;
            for (int j = 0; j < 10; ++j) {
                if (A[i] == A[j]) {
                    count++;
                    counted[j] = true;
                }
            }
            cout << A[i] << " occurs = " << count << " time" << endl;
        }
    }

    return 0;
}

