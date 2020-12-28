// beats 37% solutions in runtime
// intution : set and union


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
  
    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
  
        
        vector<int> parent(edges.size()+1);
        for(int i=1;i<=edges.size();i++)
            parent[i]=i;
        vector<int> res;
        for(auto ver:edges)
        {
            int v1=ver[0];
            int v2=ver[1];   
            while(parent[v1]!=v1)v1=parent[v1];
            while(parent[v2]!=v2)v2=parent[v2];
            
            if(v1!=v2)
                parent[v1]=v2;
            else
                res={ver[0],ver[1]};
        }
        return(res);      
    }
};
