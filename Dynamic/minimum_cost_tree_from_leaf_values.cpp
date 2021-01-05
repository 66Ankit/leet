// logic is find the minimum element in the array
// find the number =min(element-1,element+1) to this element
// res=res+element*min(element-1,element+1)
// pop the minimum element from the array
// continue till 1 elemet is left
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    
    int mctFromLeafValues(vector<int>& arr) {

        
        vector<int> Stack={INT_MAX};
        int res=0;
        for(auto x:arr)
        {
            while(Stack.back()<=x)
            {
                int mid=Stack.back();
                Stack.pop_back();
                res+=mid*min(Stack.back(),x);
            }
            
            Stack.push_back(x);
        }
        
        
        for(int i=2;i<Stack.size();i++)
        {
            res=res+Stack[i]*Stack[i-1];
        }
        return(res);
    }
};


