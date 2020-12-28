// beats 68% solutions

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:    
    
   bool dfs(vector<vector<int>> &G,vector<int> &vis,int node)
    {
            vis[node]=1;
            for(auto cur:G[node])
            {
                    
                if(vis[cur]==0&&dfs(G,vis,cur)||vis[cur]==1)
                {
                    return(true);
                }
            }
            vis[node]=2;
            return(false);
                
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
       
        vector<int> vis(graph.size(),0);
        vector<int> rec(graph.size(),0);
        vector<int> res;
        for(int i=0;i<graph.size();i++)
        {
            if(vis[i]==2||dfs(graph,vis,i)==false)
            res.push_back(i);          
        }
            
        
      return(res);  
    }
               
};