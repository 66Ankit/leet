#include<bits/stdc++.h>
using namespace std;

// solution can be improved using AP sum formula


class Solution {
public:
    int minOperations(int n) {
        int sum=0;
        if(n%2==0)
        {
            int i=1;
            int k=1;
            // int sum=0;
            while(k<=(n/2))
            {
                sum+=i;
                i+=2;
                k++;
            }
            
        }
        else
        {   int k=1;
            int i=2;
            
            while(k<=(n/2))
            {
                sum+=i;
                i+=2;
                k++;
            }
        }
        
        return(sum);
        
    }
};


// if n%2==0
// then =>  1+3+5+7+9... till n/2 terms
// else
// then => 2+4+6+8...       till n/2 terms


