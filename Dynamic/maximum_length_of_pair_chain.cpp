// beats 30% in runtime

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLongestChain(vector<vector<int>>& A) {
        
        int n=A.size();
        vector<int> dp(n,1);
        sort(A.begin(),A.end());
        int res=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(A[i][0]>A[j][1])
                {
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
            
            res=max(res,dp[i]);
        }
        
        return(res);
    }
};