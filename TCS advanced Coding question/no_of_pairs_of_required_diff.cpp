/*

Problem Statement:-   You will be given an array of integers and a target value. Determine the number of pairs of array elements that have a difference equal to a target value.

For example, given an array of [1, 2, 3, 4] and a target value of 1, we have three values meeting the condition: 2-1 = 1, 3-2 = 1, and 4-3 = 1.

Function Description

Write a function pairs. It must return an integer representing the number of element pairs having the required difference.

pairs has the following parameter(s):

k: an integer, the target difference
arr: an array of integers
Input Format

The first line contains two space-separated integers n and k, the size of arr and the target value.
The second line contains n space-separated integers of the array arr.
Sample Input

     5 2

     1 5 3 4 2 

Sample Output

     2
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t>=1)
    {
        int n,diff;
        cin >>n >>diff;
        vector<int> A(n);
        for(int i=0;i<n;i++)cin >>A[i];

        sort(A.begin(),A.end());

        int i=0,j=1;

        int res=0;

        while(i<n&&j<n&&i<j)
        {
            if(A[j]-A[i]==diff)
                res++;
            else if((A[j]-A[i])<diff)
                j++;
            else
                i++;
        }
        cout <<res<<endl;
        t--;
    }
    return(0);
}