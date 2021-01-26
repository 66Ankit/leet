//beats 93% in runtime

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    
   int power(int n,int mod)
    {
       long long int res=1;
        if(n==0)
            return 0;
       long long  int x=2;
        while(n!=0)
        {
            if(n%2==1)
            {
                res=(res*x)%mod;
            }
            x=(x*x)%mod;
            n=n/2;
        }
       return res-1;
    }
    
    int numSubseq(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        
       long long int mod=1e+9+7;
       long long int res=0;
        
        
        while(i<=j)
        {
            if(nums[i]+nums[j]<=target)
            {
                res=res+power(j-i,mod)+(nums[i]*2 <=target ? 1  : 0);
                i++;
            }
            else
            {
                j--;
            }
        }
        return res%mod;
    }
};