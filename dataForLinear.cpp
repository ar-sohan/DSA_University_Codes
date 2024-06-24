#include <bits/stdc++.h>
using namespace std;

int main(){
    srand(time(0));

    ofstream fout("lab3.txt");

    for (int i=0; i<100000; i++){
         int a = rand()%100;
        fout << a << "  ";
    }

    return 0;
}

