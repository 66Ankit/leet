// beats 94% in runtime

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
   int res=0;
    
  int find(vector<vector<int>> &G,int i,int j,int count)
    {
       int n=G.size();
       int m=G[0].size();
       res=max(res,count);
       if(i<0||j<0||i>=n||j>=m||G[i][j]!=1)
           return 0 ;
       count++;
       G[i][j]=-1;
      return(1+ find(G,i+1,j,count)+
       find(G,i-1,j,count)+
       find(G,i,j+1,count)+
       find(G,i,j-1,count));
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
     
        
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                    res=max(res,find(grid,i,j,0));
            }
        }
        
        
        return(res);
        
        
    }
};