// beats 68% in runtime

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        
        deque<int> dq;
        for(int i=0;i<deck.size();i++)
        {
            dq.push_back(i);
        }
        
        sort(deck.begin(),deck.end());
        
        vector<int> res(deck.size());
        
        for(auto x:deck)
        {
            res[dq.front()]=x;
            dq.pop_front();
            if(!dq.empty())
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        return(res);
    }
};