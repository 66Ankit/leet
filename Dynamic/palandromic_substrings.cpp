//beats 30% in runtime

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSubstrings(string s) {
        vector<vector<bool>> pal(s.length(),vector<bool>(s.length()));
        int n=s.length();
        int count=n;
        for(int i=0;i<n;i++)
        {
            pal[i][i]=true;
        }
        for(int i=0;i<=n-2;i++)
        {
            if(s[i]==s[i+1])
            {
                pal[i][i+1]=true;
                count++;
            }
        }
        
        for(int i=3;i<=n;i++)
        {
            for(int j=0;j<=n-i+1;j++)
            {
                if(s[j]==s[j+i-1]&&pal[j+1][j+i-1-1])
                {
                    count++;
                    pal[j][j+i-1]=true;
                }
            }
        }
        
        return(count);
    }
};