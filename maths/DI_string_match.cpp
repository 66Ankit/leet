#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string S) {
        
        int D=S.length();
        int I=0;
        
        vector<int> res;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='I')
            {
                res.push_back(I++);
            }
            else
            {
                res.push_back(D--);
            }
        }
        res.push_back(D);
        return(res);
    }
};