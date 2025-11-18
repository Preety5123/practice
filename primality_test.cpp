#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    string arr[T];
    for (int i = 0; i < T; i++)
    {
        int x;
        cin>>x;
        if (x==1)
        {
            arr[i]="no";
        }
        else
        {
            int k=floor(sqrt(x));
            cout<<k;
            for (int j = 0; j<= k; j++)
            {
                if (x%j==0)
                {
                    arr[i]="no";
                }
                else
                {
                    arr[i]="yes";
                }
                
                
            }
            
        }
        
        
    }
    for (int i = 0; i < T; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
    
}