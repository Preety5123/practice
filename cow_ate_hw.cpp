#include <bits/stdc++.h>
using namespace std;
using ll=long long;

// #define int ll

pair<ll, ll> avg(ll arr[],ll s,ll e,ll ax[],ll ay[])
{
    ll ans=0;
    ll y= ay[s-1];
    ans=ax[s-1];
    ans=ans-y;
    // ans=ans/(e-s);
    return {ans, (e-s)};
}

ll comp(pair<ll, ll> a, pair<ll, ll> b) {
    ll av = a.first * b.second, bv = b.first * a.second;
    return av - bv;
}

signed main(){
    freopen("homework.in", "r", stdin);
    freopen("homework.out", "w", stdout);
    int n;
    cin>>n;
    vector<pair<ll, ll>>res;
    ll arr[n];
    ll ans=0;
    ll ax[n+1];
    ll ay[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        ans+=arr[i];

    }
    for (int i = n-1; i >= 0; i--)
    {
        if (i==n-1)
        {
            ay[i]=arr[i];
        }
        else
        {
            ay[i]=min(ay[i+1],arr[i]);
        }
        
    }
    
    ax[0]=ans;
    for (int i = 0; i < n; i++)
    {
        ans-=arr[i];
        ax[i+1]=ans;
    }
    
    for (int i = 2; i < n; i++)
    {
        auto re=avg(arr,i,n,ax,ay);
        res.push_back(re);
    }

    int max_idx = 0;
    for (int i = 1; i < int(res.size()); i++) {
        if (comp(res[max_idx], res[i]) < 0) {
            max_idx = i;
        }
    }
    for (int i = 0; i < int(res.size()); i++) {
        if (comp(res[i], res[max_idx]) == 0) {
            cout << i + 1 << endl;
        }
    }

    

    return 0;
}