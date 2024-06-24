#include <bits/stdc++.h>
using namespace std;

void leftRotate(int *A, int b, int c){
    for (int i=0; i<c; i++){
        int t = A[0];
    for(int i=0; i<b; i++){
        A[i-1] = A[i];
    }
        A[b-1] = t;
    }

    //printing the expected list after operation
    for (int i=0; i<b; i++){
        cout << A[i] << " ";
    }
}

int main(){

    int a[6] = {10, 20, 30, 40, 50, 60};

    leftRotate(a, 6, 2);

    return 0;
}
