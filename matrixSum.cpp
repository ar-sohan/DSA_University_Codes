#include <bits/stdc++.h>
using namespace std;

void printMatrix(int **a, int x, int y){
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void matrixSum(int **arr1,int **arr2, int x, int y){
    int **result = new int *[x];
    for(int i=0; i<x; i++){
        result[i] = new int [y];
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printMatrix(result, x, y);
}

int main(){

    int **arr1 = new int *[3];

    for(int i=0; i<3; i++){
        arr1[i] = new int [3];
    }

    int ex1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            arr1[i][j] = ex1[i][j];
        }
    }

    int **arr2 = new int *[3];

    for(int i=0; i<3; i++){
        arr2[i] = new int [3];
    }
    int ex2[3][3] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            arr2[i][j] = ex2[i][j];
        }
    }

    printMatrix(arr1, 3, 3);
    printMatrix(arr2, 3, 3);

    matrixSum(arr1, arr2, 3, 3);

}
