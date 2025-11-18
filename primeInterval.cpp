#include <bits/stdc++.h>
using namespace std;
bool is_prime(int l){
    if (l==1)
    {
        return(false);
    }
    for (int i = 2; i*i <=l; i++)
    {
        if (l%i==0)
        {
            return(false);
        }
            
    }
    return(true);
}
const int N = 1e6+10;
bool sieve[N];

bool is_prime(int l){
    fill(sieve, sieve+N, true);
    for (int i = 2; i < N; i++) {
        if (!sieve[i]) continue;
        for (int j = i * i; j < N; j += i) sieve[j] = false;
    }

    return sieve[l];
}
int main(){
    int l,r;
    cin>>l>>r;
    for (int i = l; i <= r; i++)
    {
        if (is_prime(i))
        {
            cout<<i<<" ";
        }
        
    }
    
    
    return 0;
}