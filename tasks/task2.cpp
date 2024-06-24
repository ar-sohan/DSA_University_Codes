#include <iostream>
using namespace std;

int main(){

    int m, n;
    cout << "Enter the size of the first array: ";
    cin >> m;
    int *arr1;
    arr1 = new int [m];
    cout << "Enter the elements : ";
    for (int i=0; i<m; i++){
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> n;

    int *arr2;
    arr2 = new int [n];
    cout << "Enter the elements : ";
    for (int i=0; i<n; i++){
        cin >> arr2[i];
    }
    int repeat = 1;
    int *common = new int [m];
    for (int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr1[i] == arr2[j]){
                common[repeat] = arr1[i];
                repeat++;
            }
        }
    }

    if(repeat !=0){
        cout << "The common elements are : ";
        for(int i=1; i<repeat; i++){
            cout << common[i] << " ";
        }
    }
    else{
        cout << "No common element!";
    }



    return 0;
}

