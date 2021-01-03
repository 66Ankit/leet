#include<bits/stdc++.h>
using namespace std;

int main()
{   int t;
    cin >>t;
    while(t>=1)
    {
        int a,b;
        cin >>a >>b;

            while(b!=0)
            {
                a=a%b;
                swap(a,b);
            }
        cout <<a<<endl;
        t--;
    }
    return(0);
}