#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
       long long  int lo=0,hi=1e+9;
        while(lo<hi)
        {
           long long int mid=(lo+hi)/2;
            if(mid*mid==x)
                return(mid);
            else if(mid*mid>x)
                hi=mid-1;
            else
                lo=mid+1;
        }
        
        if(hi*hi>x)
        return(hi-1);
        
        return(hi);
        
    }
};
