#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,q;
    cin>>n>>k>>q;
    k=k%n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i]; 
    }
    int query[q];
    for (int i = 0; i < q; i++)
    {
      cin>>query[i];  
    }
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        if (i+k<n)
        {
            arr1[i]=i+k;
        }
        else
        {
            arr1[i]=abs(n-i-k);
        }
    }
    int b[n]={0};
    for (int i = 0; i < n; i++)
    {
        if (b[arr1[i]]==0)
        {
            b[arr1[i]]=arr[i];
        }
    }
    for (int i = 0; i < q; i++)
    {
        cout<<b[query[i]]<<endl;
    }
    return 0;
}