// beats 90% in runtime

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        
        int n=nums.size();
        if(n==0)
            return(0);
        
        int cur=0;
        int i=0,j=0;
        int res=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cur=cur+nums[i];
            if(cur>=s)
            {
                while(j<=i&&cur>=s)
                {
                        cur=cur-nums[j];
                        j++;
                }
                j--;
                cur=cur+nums[j];
                res=min(res,i-j+1);
            }
        }
        if(res==INT_MAX)
        return(0);
        return(res);
    }
};