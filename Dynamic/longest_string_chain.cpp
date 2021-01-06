// beats 20% solution in runtime


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    static bool comp(string a,string b)
    {
        return(a.length()<b.length());
    }
    
    int longestStrChain(vector<string>& words) {
        
        sort(words.begin(),words.end(),comp); // sort according to length
        
        unordered_map<string,int> dp;
        
        int res=0;
        for(auto word:words)
        {
            for(int i=0;i<word.length();i++)
            {
                dp[word]=max(dp[word],dp[word.substr(0,i)+word.substr(i+1)]+1);
            }
            
            res=max(res,dp[word]);
        }
        return(res);
        
    }
};