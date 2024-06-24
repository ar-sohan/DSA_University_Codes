#include <bits/stdc++.h>
using namespace std;

void averageMarks(int *p, int n){
    float sum = 0;
    for (int i=0; i<n; i++){
        sum += p[i];
    }
    cout << "The average is: " << sum/40 ;
}

void printMarks(int *p, int n){
    for (int i=0; i<n; i++){
        cout << p[i] << " ";
    }

    cout << endl;
}

int main(){

    int n = 40;

    int *a = new int [n];

    ifstream fin("marks.txt");

    for (int i=0; i<n; i++){
        fin >> a[i];
    }

    printMarks(a, n);
    averageMarks(a, n);

    return 0;
}

