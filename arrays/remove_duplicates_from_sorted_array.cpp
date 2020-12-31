// beats 98% in runtime

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        
        int n=nums.size();
        int k=1;
        int prev=nums[0];
        int count=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i]==prev)
            {
                if(count==1)
                {
                    count++;
                    nums[k]=nums[i];
                    k++;
                }
                else
                    count++;
                    
            }
            else if(nums[i]!=prev)
            {
                nums[k]=nums[i];
                k++;
                prev=nums[i];
                count=1;
            }
            
        }
        
        return(k);
        
    }
};