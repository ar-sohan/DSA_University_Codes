#include <bits/stdc++.h>
using namespace std;

void printMatrix(int **p, int r, int c){

    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cout << p[i][j] << " ";
        }
        cout << endl;
    }


}

int main(){
    int row, col;
    cout << "Enter the row and column: ";
    cin >> row >> col;

    int **p = new int *[row];

    for(int i=0; i<row; i++){
        p[i] = new int [col];
    }
    srand(time(0));

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            p[i][j] = rand()%10;
        }
    }


    printMatrix(p, row, col);

    return 0;
}
