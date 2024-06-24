#include <bits/stdc++.h>
using namespace std;

void printList(int *arr, int n){
    for (int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int *rightRotate(int *arr, int n, int k){
    for(int i=0; i<k; i++){
            int temp = arr[n-1];
        for (int j=n-1; j>0; j--){
            arr[j] = arr[j-1];
        }
        arr[i] = temp;
    }
    return arr;
}

int main(){

    int arr[6] = {10, 20, 30, 40, 50, 60};
    cout << "Original List: ";
    printList(arr, 6);
    cout << endl;
    cout << "Right rotated list : ";
    printList (rightRotate(arr, 6, 2), 6);

   return 0;
}
