// beats 34% in runtime

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countTriplets(vector<int>& arr) {
       
        vector<int> XOR(arr.size());
        XOR[0]=arr[0];
        int res=0;
        for(int i=1;i<arr.size();i++)
        {
            XOR[i]=XOR[i-1]^arr[i];
        }
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                if((XOR[j]^XOR[i]^arr[i])==0)
                {
                    res=res+j-i;
                }
            }
        }
        return(res);
        
    }
};