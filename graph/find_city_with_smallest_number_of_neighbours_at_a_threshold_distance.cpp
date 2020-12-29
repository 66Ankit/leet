// beats 43% solutions

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int Th) {
    
        // using floyed warshall algo
        
        vector<vector<int>> dis(n,vector<int>(n,INT_MAX));
        
        for(auto edge:edges)
        {
            dis[edge[0]][edge[1]]=dis[edge[1]][edge[0]]=edge[2];
        }
        
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(i==j)
                    { 
                        dis[i][j]=0;
                        continue;
                    }
                    if(dis[i][k]==INT_MAX||dis[k][j]==INT_MAX)
                    {
                        continue;
                    }
                    
                    dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);
                }
            }
        }
        
        int Min=INT_MAX;
        int res;
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(dis[i][j]<=Th)
                {
                    count++;    
                }
            }
            
            if(count<=Min)
            {
                Min=count;
                res=i;
            }
        }
        
        return(res);
        
    }
};
