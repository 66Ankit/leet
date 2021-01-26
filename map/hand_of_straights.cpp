// beats 97 % 

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int W) {
        
        if(hand.size()%W!=0)
            return false;
        
        map<int,int> mp;
        for(int x:hand)
            mp[x]++;
        
        int n=hand.size()/W;
        for(int i=0;i<n;i++)
        {
            int j=0;
            int prev;
            map<int,int> :: iterator itr;
            for(itr=mp.begin();itr!=mp.end()&&j<W;itr++)
            {
                
                if(j==0)
                {
                    prev=itr->first;
                    itr->second--;
                    if(itr->second==0)
                    {
                        mp.erase(itr->first);
                    }
                }
                else if(prev+1==itr->first)
                {
                    prev=itr->first;
                    itr->second--;
                    if(itr->second==0)
                        mp.erase(itr->first);
                }
                else
                {   
                    return false;
                }
                
                j++;
            }
            if(j!=W)
                return(false);
        }
        return true;
    }
};