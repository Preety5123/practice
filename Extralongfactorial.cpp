#include <bits/stdc++.h>
using namespace std;

/*

[Return Type] Function ( Input Parameters ) {

    ....
    return [result];
}

*/

vector<int> mult(vector<int> a, vector<int> b) {
    vector<int>c;
    for (int i = 0; i < (a.size()+b.size())-1; i++)
    {
        int x;
        x=0;
        for (int j = 0; j < a.size(); j++)
        {
            for (int k = 0; k < b.size(); k++)
            {
                if (j+k==i)
                {
                   x +=a[j]*b[k];
                }
                
            }
            
        }
        c.push_back(x);
    }
    for (int i = 0; i < c.size(); i++)
    {
        if (c[i]>9)
        {
            if ((i+1)<c.size())
            {
                int carry=c[i]/10;
                c[i]=c[i]%10;
                c[i+1]+=carry;
            }
            else
            {
                c.push_back(c[i]/10);
                c[i]=c[i]%10;
                
            }
            
        }
        else
        {
            c[i]=c[i];
        }
        
        
    }
    
    
    return c;
}

int main(){
    int n;
    cin>>n;
    vector<int >res;
    res.push_back(1);
    for (int i = 2; i <=n; i++)
    {
        vector<int>v;
        if (i<10)
        {
            v.push_back(i);
        }
        else if(i<100)
        {
           v.push_back(i%10);
           v.push_back(i/10); 
        }
        else
        {
            v.push_back((i%100)%10);
            v.push_back((i%100)/10);
            v.push_back(i/100);
        }
        mult(res,v);
        res=mult(res,v);
    }
    for (int i = res.size()-1; i >=0; i--)
    {
        cout<<res[i];
    }
    cout<<endl;
    
    return 0;
}