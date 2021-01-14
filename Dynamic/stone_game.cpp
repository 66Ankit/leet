//beats 31% in runtime

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int maxStones(int i,int j,vector<int> &piles,vector<vector<int>>& dp)
    {
        
        
        if(dp[i][j]>0)
            return(dp[i][j]);
        
        else if(i+1==j)
        {
            dp[i][j]=max(piles[i],piles[j]);
            return(dp[i][j]);
        } 
        
        else
        {
            int choice1=piles[i]+min(maxStones(i+2,j,piles,dp),maxStones(i+1,j-1,piles,dp));
            int choice2=piles[j]+min(maxStones(i,j-2,piles,dp),maxStones(i+1,j-1,piles,dp));
            dp[i][j]=max(choice1,choice2);
            return(dp[i][j]); // alex choice
        }
        
       
    }
    
    bool stoneGame(vector<int>& piles) {
        
        int n=piles.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        
        int ans=maxStones(0,n-1,piles,dp);
        int tot=0;
        for(auto x:piles)
            tot+=x;
        
        return(ans>tot/2);
        
    }
    
    
};