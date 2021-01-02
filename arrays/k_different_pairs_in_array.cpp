// beats 96% in runtime

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        
        int i=0,j=1;
        int n=nums.size();
        int res=0;
        while(i<n&&j<n)
        {
            if(nums[j]-nums[i]==k&&i!=j)
            {
                res++;
                i++;
                j++;
                while(i<n&&nums[i]==nums[i-1])i++;
                
            }
            else if(nums[j]-nums[i]<k)
                j++;
            else 
                i++;
            
              if(i>=j)
                    j=i+1;
        }
        return(res);
    }
};