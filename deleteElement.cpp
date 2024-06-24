#include <bits/stdc++.h>
using namespace std;

void printList(int *arr, int n){
    for (int i=0; i < n; i++){
        if(arr[i] != 0){
            cout << arr[i] << " ";
    }
        }
    cout << "\n\n";
}

void deleteElement(int *a, int n, int x){
    for (int i=0; i<n; i++){
        if(a[i] == x){
            a[i] = 0;
        }
    }
    printList(a, n);
}

int main(){
    int arr[6] = {10, 20, 30, 20, 50, 20};
    printList(arr, 6);
    int a;
    cout << "Choose any element to delete: ";
    cin >> a;
    deleteElement(arr, 6,  a);

    return 0;
}
