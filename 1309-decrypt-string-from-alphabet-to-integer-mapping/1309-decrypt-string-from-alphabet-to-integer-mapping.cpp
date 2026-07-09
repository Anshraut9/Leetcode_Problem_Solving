class Solution {
public:
    string freqAlphabets(string s) {
        map<int,char>mp;
        char ch = 'a';
        for(int i=1;i<=9;i++) {
            mp[i] = ch;
            ch++;
        }
        char ch2 = 'j';
        map<string,char>freq;
        for(int i=10;i<=26;i++) {
            string str = to_string(i) + '#';
            freq[str] = ch2;
            ch2++;
        }

        int n = s.size();
        string ans = "";
        for(int i=n-1;i>=0;i--) {
            if(s[i] == '#') {
                string refer = "";
                refer += s[i-2];
                refer += s[i-1];
                refer += s[i];
                i-=2;
                ans += freq[refer];
            } else {
                ans += mp[s[i] - '0'];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};