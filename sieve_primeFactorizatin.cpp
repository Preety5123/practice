#include <bits/stdc++.h>
using namespace std;
const int N=1e6+1;
int sieve[N];
//prime factorization using sieve (O(log N))

void precomput(int N)
{
    fill(sieve,sieve+N,-1);
    sieve[0]=0;
    sieve[1]=0;
    for (int i = 2; i < N; i++)
    {
        if (sieve[i]==-1)
        {
            sieve[i]=i;
            for (long long j =i*1LL*i; j < N; j+=i)
            {
                if (sieve[j]==-1)
                {
                    sieve[j]=i;
                }
                
            }
            
        }    
    }
}
vector<int> primefact(int l)
{
    vector<int>v;
    while (l>1)
    {
        v.push_back(sieve[l]);
        l=l/sieve[l];
    }
    return v;

}


int main(){
    int n;
    cin>>n;
    precomput(N);
    vector<int>res;
    res=primefact(n);
    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<"*";
    }
    cout<<endl;
    
    return 0;
}