// beats 23% in runtime
// intution : check if you can topologically sort the nodes or not

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool flag=true;
    int count=0;
   void dfs(vector<int> G[],vector<bool> &vis,vector<int> inStack,int n,int node)
    {
        vis[node]=true;
        for(auto x:G[node])
        {
            if(vis[x]==false)
            {
                count++;
                inStack[x]=1;
                dfs(G,vis,inStack,n,x);
                inStack[x]=0;
                
            }
            else if(inStack[x]==true)
            {
                flag=false;
            }
        }
    }
    
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<bool> vis(n,false);
        vector<int> inStack(n,0);
        vector<int> G[n];
        for(auto x:pre)
        {
            G[x[1]].push_back(x[0]);
        }
        for(int i=0;i<n;i++)
        {   
            if(vis[i]==false)
            {   count++;
                inStack[i]=1;
                dfs(G,vis,inStack,n,i);
                inStack[i]=0;
            }
        }

        return(flag);
    }
};