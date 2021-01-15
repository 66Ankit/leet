// reference https://www.youtube.com/watch?v=YzvF8CqPafI&t=2006s
  
// by Sumit Malik

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxCoins(vector<int>& nums) {
        
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(n));
        
        for(int len=1;len<=n;len++)
        {
            for(int i=0;i<=n-len;i++)
            {
                int j=i+len-1;
                for(int k=i;k<=j;k++)
                {
                    int left=(i==k ? 0 :dp[i][k-1]);
                    int right=(k == j ? 0 : dp[k+1][j]);
                    int cur_cost=(i-1<0 ? 1 : nums[i-1]) * nums[k] * (j+1>=n ? 1 : nums[j+1]);
                    dp[i][j]=max(dp[i][j],left + right+ cur_cost);
                }
            }
        }
        
        return(dp[0][n-1]);
        
    }
};