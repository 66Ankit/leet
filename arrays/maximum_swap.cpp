// beats 100 in runtime


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        int k=0;
    //    while(k<2)
       for(int i=0;i<s.length();i++)
        {
            int Max=-1;
            for(int j=i+1;j<s.length();j++)
            {
                if(s[i]-'0'<s[j]-'0'&&s[Max]-'0'<=s[j]-'0')
                {
                    Max=j;
                }
            }
            if(Max!=-1)
            {
                swap(s[i],s[Max]);
                break;
            }  
    }
        return(stoi(s));
    }
};