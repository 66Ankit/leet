// beats 100%

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string interpret(string com) {
        
        int i=0,n=com.length();
        string res="";
        while(i<n)
        {
            if(com[i]=='G')
            { 
                res.push_back('G');
                i++;
            }
            else if(com[i]=='('&&com[i+1]==')')
            {
                res.push_back('o');
                i+=2;
            }
            else
            {
                res.append("al");
                i+=4;
            }
        }
        
        return(res);
    }
};