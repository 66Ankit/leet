// beats 100% 

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
     
        vector<long long int> dp(9,9);
        
        dp[0]=1;
        dp[1]=10;
        for(int i=2;i<9;i++)
        {
            int temp=i-1;
            int ways=9;
            while(temp>0)
            {
                dp[i]=dp[i]*ways;
                ways--;
                temp--;
            }
            dp[i]=dp[i]+dp[i-1];
            
        }
     
        return(dp[n]);
    }
};