#include <bits/stdc++.h>
using namespace std;

void printList(int *arr, int n){
    for (int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
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
    printList(a, n);
}
int main(){

    int n = 10000;
    int *a = new int [n];

    ifstream fin("bigShift.txt");

    for (int i=0; i<n; i++){
        fin >> a[i];
    }

    shiftRight(a, n, 9000);

    return 0;
}



