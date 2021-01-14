// beats 65% in runtime

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int maxScore(int i,int j,vector<int> &nums,vector<vector<int>> &dp)
    {
        if(dp[i][j])
            return(dp[i][j]);
        else if(i+1==j)
            return(dp[i][j]=max(nums[i],nums[j]));
        
        else if(i==j)
            return(dp[i][j]=nums[i]);
        
        else
        {
            int choice1=nums[i]+min(maxScore(i+2,j,nums,dp),maxScore(i+1,j-1,nums,dp)); // player2 trying to minimize the score for player 1
            int choice2=nums[j]+min(maxScore(i+1,j-1,nums,dp),maxScore(i,j-2,nums,dp));
            
            return(dp[i][j]=max(choice1,choice2)); // player 1 will choose the maximum choice
        }
    }
    
    
    bool PredictTheWinner(vector<int>& nums) {
        int total=0;
        for(auto x:nums)
        {
            total+=x;
        }
        
        int n=nums.size();
        
        vector<vector<int>> dp(n,vector<int>(n,0));
        
        int score1=maxScore(0,n-1,nums,dp);

        return(score1>=(total-score1));
    }
};