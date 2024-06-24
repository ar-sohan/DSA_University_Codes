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

    int n = 10000;
    int *a = new int [n];

    ifstream fin("bigShift.txt");

    for (int i=0; i<n; i++){
        fin >> a[i];
    }

    shiftLeft(a, n, 9000);

    return 0;
}



