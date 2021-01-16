// beats 100%

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string defangIPaddr(string A) {
        
        string res="";
        int i=0;
        int j=0;
        while(i<A.length())
        {
            if(A[i]=='.')
            {
                res.append(A.substr(j,i-j));
                j=i+1;
                res.append("[.]");
            }
            i++;
        }
         res.append(A.substr(j));
        
        return(res);
        
    }
};