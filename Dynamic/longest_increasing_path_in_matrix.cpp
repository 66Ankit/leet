// beats 25%

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    vector<vector<int>> dir={{0,-1},{0,1},{1,0},{-1,0}};
    int find(vector<vector<int>> &M,int i,int j,vector<vector<int>> &dp)
    {
        int n=M.size(),m=M[0].size();
        if(dp[i][j])
            return(dp[i][j]);
        
        int Max=1;
        for(auto d:dir)
        {
            int x=i+d[0],y=j+d[1];
            
            if(x<0||y<0||x>=n||y>=m||M[x][y]<=M[i][j]) continue;
                
            int len=1+find(M,x,y,dp);
            Max=max(Max,len);
        }
        return dp[i][j]=Max;
    }
    
    int longestIncreasingPath(vector<vector<int>>& M) {
        int n=M.size(),m=M[0].size();
        vector<vector<int>> dp(n,vector<int>(m));
        int res=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int len=find(M,i,j,dp);
                
                res=max(len,res);
            }
        }
        return(res);
    }
};