#include <bits/stdc++.h>
using namespace std;
const int max_n=9e7;
const int m=5000000;
const int x=10000;
int8_t is_prime[max_n];
int primes[m];
int main(){
    int i,j;
    for ( i = 0; i < max_n; i++)
    {
        is_prime[i]=1;
    }
    is_prime[0]=0;
    is_prime[1]=0;
    for ( i = 2; i < x; i++)
    {
        if (is_prime[i])
        {
            for ( j = i*i; j < max_n; j=j+i)
            {
                is_prime[j]=0;
            }
            
        }
        
    }
    j = 0;
    for ( i = 2; i < max_n; i++) {
        if (j >= m) break;
        if (is_prime[i] == 1) primes[j++] = i;
    }

    
    int q;
    scanf("%d", &q);
    for ( i = 0; i < q; i++) {
        int k;
        scanf("%d", &k);
        printf("%d\n", primes[k-1]);
    }
    
    return 0;

    
}