#include <iostream>
using namespace std;

int main() {

    int m;
    cout << "Enter the size of the first array: ";
    cin >> m;
    int *arr;
    arr = new int [m];
    cout << "Enter the elements : ";
    for (int i=0; i<m; i++){
        cin >> arr[i];
    }
    bool hasDuplicates = false;

    int idx = 0;
    for (int i = 0; i < m; ++i) {
        bool flag = false;
        for (int j = 0; j < idx; ++j) {
            if (arr[i] == arr[j]) {
                flag = true;
                hasDuplicates = true;
                break;
            }
        }
        if (!flag) {
            arr[idx++] = arr[i];
        }
    }

    if (hasDuplicates) {
        for (int i = 0; i < idx; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Array already unique!" << endl;
    }

    return 0;
}
