// beats 10%

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        vector<int> res;
        int n=nums.size();
        for(int i=0;i<n;i+=2)
        {
            while(nums[i]!=0)
            {
                res.push_back(nums[i+1]);
                nums[i]--;
            }
        }
        return(res);
        
    }
};