#include <bits/stdc++.h>
using namespace std;

void printList(int *a, int n){
    for (int i=0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}

int  *insertBegin(int *a, int n, int k){
    int *b = new int [n+1];
    b[0] = k;

    for (int i=0; i<n; i++){
        b[i+1] = a[i];
    }
    return b;
}

int main(){

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *a = new int[n];
    cout << "Enter the elements of the array :";
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    printList(a, n);
    int k;
    cout << "Enter the element to enter at first: ";
    cin >> k;
    int *p = insertBegin(a, n, k);
    printList(p, n+1);

    return 0;
}
