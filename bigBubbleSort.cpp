#include <bits/stdc++.h>
#include <chrono>
using namespace std;

void printList(int *arr, int n){
    for (int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
}
int *bubbleSort(int *a, int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j< n-i-1; j++){
            if(a[j] > a[j+1]){
                int temp;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    return a;
}

int main(){

    int n = 10000;
    int *a = new int [n];
    ifstream fin("bigShift.txt");
    for (int i=0; i<n; i++){
        fin >> a[i];
    }

    auto start = high_resulution_clock::now();
    int *p;
    p = bubbleSort(a, n);
    auto stop = high_resulution_clock::now();
    auto duration = duration_cast<microseconds>(stop-start);
    cout << duration.count() << endl;


    printList(a, n);
    cout << "\n\n";
    int *p;
    //p = bubbleSort(a, n);
    //printList(p, n);

    return 0;
}
