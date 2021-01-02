#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
        
        // for n/3  there could only be at max 2 numbers in result
        
        int num1=INT_MIN,num2=INT_MIN,ct1=0,ct2=0;
        
        for(int i=0;i<a.size();i++)
        {
                
                 if(num1==a[i])
                {
                    ct1++;
                }
                else if(num2==a[i])
                {
                    ct2++;
                }
                else if(ct1==0)
                {
                    num1=a[i];
                    ct1++;
                }
                else if(ct2==0)
                {
                    num2=a[i];
                    ct2++;
                }
                
            else
            {
                ct1--;
                ct2--;
            }
        }
        ct1=0;ct2=0;
        for(auto x:a)
        {
            if(num1==x)
            {
                ct1++;
            }
            else if(num2==x)
            {
                ct2++;
            }
            
        }
        
        vector<int> res;
        if(ct1>a.size()/3)
            res.push_back(num1);
        if(ct2>a.size()/3)
            res.push_back(num2);
        return(res);
        
    }
};