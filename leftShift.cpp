#include <bits/stdc++.h>
using namespace std;

void shiftLeft(int *arr, int n, int k){
     for (int a=0; a<k; a++){
        for (int i=0; i<n-1; i++){
            arr[i] = arr[i+1];
        }
     }
    for(int j=n-1; j > n-1-k ; j--){
        arr[j] = 0;
     }
     for (int i=0; i<n; i++){
        cout << arr[i] << " " ;
     }
};

int main(){

    int a[5] = {10, 20, 30, 40, 50};

    shiftLeft(a, 5, 2);

    return 0;
}
