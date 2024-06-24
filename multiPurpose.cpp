#include <bits/stdc++.h>
using namespace std;

void printList(int *arr, int n){
    for (int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int *makeDouble(int *a, int n){

    int *b = new int[n];

    for (int i=0; i<n; i++){
        b[i] = a[i] * 2;
    }
    return b;
}

int *joinArray(int *a, int *b, int n){
    int *c = new int [n+n];

    for(int i=0; i<n; i++){
        c [i] = a[i];
    }
    for(int i=0, j = n;  i<n, j< 2 * n; i++, j++){
        c[j] = b[i];
    }
    return c;
}

int main(){

    int a[5] = {10, 20, 30, 40, 50};
    printList(a, 5);
    int *b = new int[5];
    b =  makeDouble(a, 5);
    printList(b, 5);
    int *c = joinArray(a, b, 5);
    printList(c, 10);

    return 0;
}
