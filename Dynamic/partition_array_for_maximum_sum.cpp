// beats 80% in runtime


// intution : let's say your are at index i
// now you can travel at max K steps  back and find out the maximum elemt in W size window
// each time while incresing the size of window in back direction
// change dp[i] such that dp[i]= max(dp[i], dp[i-k]+curMaximum*W)// current maximum in W size Size window
// 
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& A, int K) {
     
        int n=A.size();
        vector<int> dp(n);
        for(int i=0;i<n;i++)
        {
            int curMax=0;
            for(int k=1;k<=K && i-k+1>=0 ;k++)
            {
                curMax=max(curMax,A[i-k+1]);
                
                dp[i]=max(dp[i],(i-k >=0 ? dp[i-k]: 0)+curMax*k);
            }
        }
     
        return(dp[n-1]);
        
    }
};