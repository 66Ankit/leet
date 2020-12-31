// beats 48% in runtime


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
     
        int i=0;
        while(i<nums.size())
        {
            if(nums[i]==i+1)
            {
                i++;
            }
            else if(nums[i]==nums[nums[i]-1])
            {  
                i++;
            }
            else
                swap(nums[i],nums[nums[i]-1]);
        }
        
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=i+1)
                res.push_back(nums[i]);
        }
             
        return(res);
    }
};