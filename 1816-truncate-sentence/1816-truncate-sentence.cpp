class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans = "";
        int count = 0;
        int n = s.size();
        for(int i=0;i<n;i++) {
            if(count==k) {
                break;
            }
            if(s[i] == ' ') {
              count++;
              ans += ' ';
            } else {
              ans += s[i];
            }
        }

        if(ans.back() == ' ') {
            ans.pop_back();
        }
        return ans;
    }
};