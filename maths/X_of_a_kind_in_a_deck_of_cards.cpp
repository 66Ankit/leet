#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int gcd(int a,int b)
    {
        while(b!=0)
        {
            a=a%b;
            swap(a,b);
            
        }
        return(a);
        
    }
    
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> mp;
        for(auto x:deck)
            mp[x]++;
        
        int low,flag=true;
        for(auto x:mp)
        {
            if(flag)
            {   low=x.second;
                flag=false;
            }
            
            else
                low=gcd(low,x.second);
            
            if(low==1)
                return(false);
        }
   
     
        return(true);
    }
};