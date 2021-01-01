// beats 6%

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        
        
        sort(nums.begin(),nums.end());
        
        int n=nums.size();
        int res=0;
        for(int i=n-1;i>=0;i--)
        {
            int j=0,k=1;
            for(int j=0;j<=i-2;j++)
            {   k=j+1;
                while(k<i&&nums[i]>=(nums[j]+nums[k]))
                {   
                    k++;
            
                }
              res=res+i-k;
            }
            
        }
            
     
        return(res);
    }
};