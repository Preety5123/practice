#include <bits/stdc++.h>
using namespace std;

/*

row_cond = [&](int r) -> bool {
                return r == r_q;
            };

[Captures] (Arguments) -> ReturnType {
    Body...
};


Arguments done
ReturnType done
Body done.


*/


int main()
{
    int n,k;
    cin>>n>>k;
    int r_q,c_q;
    cin>>r_q>>c_q;
    int obs[k][2];
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>obs[i][j];
        }
    }
    vector<pair<int,int>>d;
    d={{0,1},{1,0},{0,-1},{-1,0},{1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
    int count =0;
    for (int i = 0; i < 8; i++)
    {
        vector<pair<int,int>>v;
        function<bool(int row_value)> row_cond, col_cond;
        if (d[i].first==0)
        {
            row_cond = [&](int r) -> bool {
                return r == r_q;
            };            
        }
        else if (d[i].first==1)
        {
            row_cond = [&](int r) -> bool {
                return r > r_q;
            };
        }
        else if (d[i].first==-1)
        {
            row_cond = [&](int r) -> bool {
                return r < r_q;
            };
        }
        if (d[i].second==0)
        {
            col_cond=[&](int c) -> bool{
                return c==c_q;
            };
        
        }
        else if (d[i].second==1)
        {
            col_cond=[&](int c) -> bool{
                return c>c_q;
            };
        }
        else if (d[i].second==-1)
        {
            col_cond=[&](int c) -> bool{
                return c<c_q;
            };
        }
        for (int j = 0; j < k; k++)
        {
            if (row_cond(obs[j][0]) && col_cond(obs[j][1])) {
                if (v.size()==0)
                {
                    v.push_back({obs[j][0],obs[j][1]});
                }
                else
                {
                    if ((v[0].first,v[0].second)>((obs[j][0],obs[j][1])))
                    {
                        v.pop_back();
                        v.push_back({obs[j][0],obs[j][1]});
                    }
                    else
                    {
                        continue;
                    }
                    
                    
                }
                
                
            }
        }


        
        
        
        
    }
    
    return 0;
}