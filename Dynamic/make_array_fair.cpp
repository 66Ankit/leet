// beats 98% in  runtime


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        
        int n=nums.size();
        int righteven=0,rightodd=0;
        for(int i=0;i<n;i++)
        {
            if((i+1)%2==1)
                rightodd+=nums[i];
            else
                righteven+=nums[i];
        }
        int lefteven=0,leftodd=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if((i+1)%2==1)
            {
                rightodd-=nums[i];
            }
            else
            {
                righteven-=nums[i];
            }   
            if(lefteven+rightodd==leftodd+righteven)
                count++;
            
            if((i+1)%2==1)
                leftodd+=nums[i];
            else
                lefteven+=nums[i];
        }
        return(count);      
    }
};