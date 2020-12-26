// Problem Statement-:  You have M questions and N seconds to complete a test. Each question has some points and takes some time to solve (which will be given as input). Find the maximum mark that can be scored by the student within the given time N.

// Sample test case:

// 4 // number of questions
// 10 // Total time to attend the test
// 1 2 // one mark question – 2 seconds to solve.
// 2 3 // two mark question – 3 seconds to solve.
// 3 5 // three mark question – 5 seconds to solve.
// 4 7 // 4 mark question – 7 seconds to solve.



#include<bits/stdc++.h>
using namespace std;




int MaxScore(vector<int> marks,vector<int> time,int limit,int ques)
{
    vector<vector<int>> dp(ques+1,vector<int>(limit+1));

    for(int i=0;i<=ques;i++)
    {
        for(int j=0;j<=limit;j++)
        {
            if(i==0||j==0)
            {
                dp[i][j]=0;
            }
            else if(j>=time[i-1])
            {
                dp[i][j]=max(dp[i-1][j-time[i-1]]+marks[i-1],dp[i-1][j]);
                
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
            
        }
    }

    return(dp[ques][limit]);
}


int main()
{
    int t;
    cin >>t;
    while(t>=1)
    {
        int ques,limit;
        cin >>ques >>limit;
        vector<int> marks(ques),time(ques);
        for(int i=0;i<ques;i++)
        {
            cin >> marks[i];
        }
        for(int i=0;i<ques;i++)
        {
            cin >>time[i];
        }
        cout <<MaxScore(marks,time,limit,ques)<<endl;
        t--;
    }
    return 0;
}