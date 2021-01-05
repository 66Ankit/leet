// beats 82% runtime


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findUnsortedSubarray(vector<int>& array) {
        
        int i=1;
	int n=array.size();
	bool flag=true;
	for(int k=1;k<n;k++)
	{
		 if(array[k]<array[k-1])
			 flag=false;
	}
	
	if(flag)
		return 0;
        
	while(i<n&&array[i]>=array[i-1])  i++;
	int j=n-2;
	while(j>=0&&array[j]<=array[j+1]) j--;
	
	int Min=array[i-1],Max=array[j+1];
	for(int k=i-1;k<=j+1;k++)
	{
		Min=min(Min,array[k]);
		Max=max(Max,array[k]);
	}
	cout <<Min<<" "<<Min<<endl;
	int lo=0;
	while(lo<n&&Min>=array[lo]) lo++;
	int hi=n-1;
	while(hi>=0&&Max<=array[hi]) hi--;
	return hi-lo+1;
        
    }
};