// beats 86 % in  runtime

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& D) {
        
       long long int A[23];
        A[0]=1;
        for(int i=1;i<=22;i++)
        {
            A[i]=A[i-1]*2;
        }
        
        unordered_map<int,int> mp;
        
        mp[D[0]]++;
        
        int mod=1e9+7;
        int res=0;
        for(int i=1;i<D.size();i++)
        {
            for(int j=0;j<23;j++)
            {

                 if(mp.find(A[j]-D[i])!=mp.end())
                { 
                    res=res+mp[A[j]-D[i]];
                    res=res%mod;
                }

            }
            mp[D[i]]++;
        }
        return(res);
        
    }
};