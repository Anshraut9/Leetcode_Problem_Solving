class Solution {
public:
    int countValidPrefixes(string s) {
        int zeros=0,ones=0,ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0')zeros++;
            else ones++;
            if(abs(zeros-ones)<=1)ans++;
        }
        return ans;
    }
};