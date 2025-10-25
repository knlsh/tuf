// print the values N to 1

#include <bits/stdc++.h>

using namespace std;

void dummy(int N) {
    if (N == 0) 
        return;
    
    cout << N << " ";
    dummy(N-1);
}

int main () {
    dummy(3);
}