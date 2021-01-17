// beats 96% in runtime

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        
        deque<pair<int,int>> dq;
        
        int i=0;
        int Max=INT_MIN;
        while(i<k)
        {   
            while(!dq.empty()&&dq.back().first<nums[i])
            {
                dq.pop_back();
                
            }
            dq.push_back(make_pair(nums[i],i));
            i++;
        }
        vector<int> res;
        res.push_back(dq.front().first);
        while(i<nums.size())
        {
            if(!dq.empty()&&dq.front().second==i-k)
            {
                dq.pop_front();
            }
            while(!dq.empty()&&dq.back().first<nums[i])
            {
                dq.pop_back();
                
            }
            dq.push_back(make_pair(nums[i],i));
            res.push_back(dq.front().first);
            i++;
        }
        return(res);
        
    }
};