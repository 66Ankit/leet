// beats 40%
#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
class Solution {
public:
    string lastSubstring(string s) {
        
        int i=0,j=1,k=0,n=s.length();
        while(j+k<n)
        {
            if(s[i+k]==s[j+k]) 
                k++;
            else if(s[i+k]<s[j+k])
            {
                i=max(i+k+1,j);
                j=i+1;
                k=0;
            }
            else
            {
                j=j+k+1;
                k=0;
            }
        }      
        return(s.substr(i));
    }
};