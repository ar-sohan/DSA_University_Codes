#include <iostream>
using namespace std;

int main(){

    int m, n;
    cout << "Enter the size of the first array: ";
    cin >> m;
    int *arr1;
    arr1 = new int [m];
    cout << "Enter the elements : ";
    for (int i=0; i<m; i++){
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> n;

    int *arr2;
    arr2 = new int [n];
    cout << "Enter the elements : ";
    for (int i=0; i<n; i++){
        cin >> arr2[i];
    }

    int *arr3;
    arr3 = new int [m+n];

    for (int i=0; i<m; i++){
        arr3[i] = arr1[i];
    }

    for(int i=0, j=m; i<n, j<m+n; i++, j++){
        arr3[j] = arr2[i];
    }

    for(int i=0; i<m+n; i++){
        cout << arr3[i] << " ";
    }

    return 0;
}
