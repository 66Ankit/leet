// beats 100%

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int res=0,n=nums.size();
        int cur=nums[0];
        int count=1;
        for(int i=1;i<n;i++)
        {
            if(cur==nums[i])
                count++;
            else
            {
                cur=nums[i];
                res=res+(count)*(count-1)/2;
                count=1;
            }
        }
        
        res=res+count*(count-1)/2;
        
        return(res);
        
        
    }
};