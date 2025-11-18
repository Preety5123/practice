#include <bits/stdc++.h>
using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int rand(int a, int b) {
    return a + rng() % (b - a + 1);
}

int main(){
    int n = rand(3, 1000);
    cout << n << endl;
    for (int i = 0; i < n; i++) {
        cout << rand(1, 100000) << " ";
    }
    cout << endl;
    
    return 0;
}