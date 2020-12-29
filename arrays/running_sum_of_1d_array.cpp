// beats 89%

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        for(int i=1;i<nums.size();i++)
        {
            nums[i]=nums[i-1]+nums[i];
        }
        
        return(nums);
        
    }
};