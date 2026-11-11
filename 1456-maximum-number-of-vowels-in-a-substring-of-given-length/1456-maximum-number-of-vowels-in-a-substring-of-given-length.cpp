class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int ans = 0;
        for(int i=0;i<k;i++) {
            char ch = s[i];
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                ans++;
            }
        }

        int curr = ans;
        for(int i=0;i+k<n;i++) {
            char ch = s[i];
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') { 
                curr--;
            }
            char refer = s[i+k];
            if(refer == 'a' || refer == 'e' || refer == 'i' || refer == 'o' || refer == 'u') { 
                curr++;
            }

            ans = max(ans,curr);
        }
        return ans;
    }
};