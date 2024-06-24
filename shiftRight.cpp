#include <bits/stdc++.h>
using namespace std;

void printList(int *arr, int n){
    for (int i=0; i < n; i++){
        cout << arr[i] << " "<< endl;
    }
    cout << "\n\n";
}

void shiftRight(int *a, int n, int k){
    for(int j=0; j<k; j++){
        for (int i=n-1; i>0; i--){
            a[i] = a[i-1];
        }
    }
    for (int i=0; i<k; i++){
        a[i] = 0;
    }
    printList(a, 6);

}

int main(){

   int arr[6] = {10, 20, 30, 40, 50, 60};

   shiftRight(arr, 6, 2);

    return 0;
}

