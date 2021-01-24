// beats 99.63 %

class Solution {
public:
    int maxVowels(string s, int k) {
        
        int i=0,count=0,res=0;
        int n=s.length();
        while(i<n&&i<k)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                count++;
            }
            i++;
        }
        res=max(res,count);
        while(i<n)
        {
            if(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u')
            {
                count--;
            }
            
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                count++;
            }
            
            res=max(res,count);
            i++;
        }
        return res;
    }
};