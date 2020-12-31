// beats 88% in runtime

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        
        int n=nums.size();
        int i;
        for(i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                int j=i+1;
                while(j<n&&nums[j]>nums[i])
                    j++;
                
                swap(nums[i],nums[j-1]);
                sort(nums.begin()+i+1,nums.end());
                break;
            }
        }
        if(i==-1)
            reverse(nums.begin(),nums.end());
        
        
    }
};