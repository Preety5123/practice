#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+10;
bool sieve[N];


// precomputation: O(n lg lg n)
// query: O(1)
bool is_prime(int x){

    return sieve[x];
}

int main(){
    fill(sieve, sieve+N, true);
    sieve[0]=0;
    sieve[1]=0;
    for (int i = 2; i < N; i++) {
        if (sieve[i])
        {
            for (long long j = (long long)i*i; j < N; j+=i)
            {
                sieve[j]=false;
            }
            
        }
        
    }
    vector<int>v;
    int count=0;
    for (int i = 0; i < N; i++)
    {
        if (is_prime(i))
        {
            count++;
        }
        v.push_back(count);
        
    }
    int res=0;
    vector<int>c;
    for (int i = 0; i < v.size(); i++)
    {
        if (is_prime(v[i]))
        {
            res++;
        }
        c.push_back(res);
    }
    
    int t;
    cin>>t;
    int result[t];
    for(int k=0;k<t;k++)
    {
        int l,r;
        cin>>l>>r;
        result[k]=(c[r]-c[l-1]);
    }
    for (int i = 0; i < t; i++)
    {
        cout<<result[i]<<endl;
    }
    
    return 0;
}