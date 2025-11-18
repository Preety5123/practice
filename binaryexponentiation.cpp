#include <bits/stdc++.h>
using namespace std;
long long binaryEponentiation(int base,int power){
    int res=1;
    while(power>=1)
    {
        if (power%2!=0)
        {
            res=res*base;
            power--;
        }
        else
        {
            base *=base;
            power /=2;
        }
        cout<<res<<" "<<base<<" "<<power<<endl;

    }
    return (res);
    
}
using ll = long long;

/*

2^50
= 2^32 * 2^16 * 2^2

= 2^2 * 2^16 * 2^32


51 = 1 + 2 + 16 + 32
   = 110011
1 2 4 8 16 32 
110011 -> 11001 -> 1100 -> 110 -> 11   -> 1 -> 0
a^1    ->  a^2  -> a^4  -> a^8 -> a^16 -> a^32


a^(11011) = a * (a^2)^(1101)

a * a^2 * 

b = 2^0 + 2^1 + 2^2 ...

*/

ll bexp(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b % 2 == 1) res *= a;
        a *= a;
        b /= 2;
    }
    return res;
}

int main(){
    int b,p;
    cin>>b>>p;
    cout<<bexp(b,p);

    return 0;

    auto x = 5LL;

    /*
    
    */

}