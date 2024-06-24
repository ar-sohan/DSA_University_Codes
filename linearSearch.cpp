#include <bits/stdc++.h>
using namespace std;

void printList(int *a, int n){
    for (int i=0; i < n; i++){
        cout << a[i] << " ";
    }
}

bool linearSearch(int *a, int n, int element){
    bool flag;
    for(int i=0; i<n; i++){
            if(a[i] == element){
                flag = true;
                break;
            }
            else{
                flag = false;
            }
    }
    return flag;
}

int main(){

    int n = 100000;
    int *a = new int [n];
    ifstream fin("lab3.txt");
    for (int i=0; i<n; i++){
        fin >> a[i];
    }

    //printList(a, n);
    //cout << "\n\n";
    bool p;

    int element;
    cout << "Enter an element to search : ";
    cin >> element;

    p = linearSearch(a, n, element);

    if (p == true){
        cout << "Founded! Its in the list.";
    }
    else if (p == false){
        cout << "Oops! Item not found";
    }
    else{
        cout << "Error!";
    }
    return 0;
}
