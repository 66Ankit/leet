#include<bits/stdc++.h>
using namespace std;

// beats 88% solutions in runtime


class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        vector<int> row(n,0);
        vector<int> col(m,0);
        
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j])
                {
                    row[i]++;
                    col[j]++;
                }
            }
        }
        
        
        int res=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]&&((row[i]>1)||(col[j]>1))) // if count of servers in that row or column is grater than 1 increment counter
                {
                    res++;
                }
            }
        }
        
        return(res);
    }
};