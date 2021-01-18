// beats 96 % in runtime
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    vector<int> stk;
    bool flag=true;
    
    
   void dfs(int s,vector<bool> &inStk,vector<bool> &vis,vector<vector<int>> &G)
    {   
       
        if(flag==false)
            return ;
        vis[s]=true;
       
        for(auto x:G[s])
        {
            if(vis[x]==false)
            {
                inStk[x]=true;
                dfs(x,inStk,vis,G);
                inStk[x]=false;
            }
            else if(inStk[x]==true)
            {
                flag=false;
            }
        }
       stk.push_back(s);
    }
    
    
    vector<int> findOrder(int n, vector<vector<int>>& A) {
        
        vector<bool> inStk(n,false);
        
        vector<vector<int>> G(n);
        for(auto x:A)
        {
            G[x[1]].push_back(x[0]);
        }
        
        vector<bool> vis(n,false);
        
        for(int i=0;i<n;i++)
        {
            if(vis[i]==false)
            {   inStk[i]=true;
                dfs(i,inStk,vis,G);
                inStk[i]=false;
            }
            
        }

        
        if(flag==false)
            return {};

        vector<int> res;
        for(int i=stk.size()-1;i>=0;i--)
            res.push_back(stk[i]);
        return res;
        
    }
};