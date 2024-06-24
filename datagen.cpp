#include <bits/stdc++.h>
using namespace std;

int main(){
    srand(time(0));

    ofstream fout("numbers.txt");

    for (int i=0; i<10000; i++){
         int a = rand()%100 + 1;
        fout << a << "  ";
    }

    return 0;
}
