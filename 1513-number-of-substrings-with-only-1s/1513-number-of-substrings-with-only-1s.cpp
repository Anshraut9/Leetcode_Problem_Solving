class Solution {
public:
    int numSub(string s) {
        int n = s.size();
        long long MOD = 1e9+7;
        long long ans = 0;
        int count = 0;
        for(int i=0;i<n;i++) {
            if(s[i] == '1') {
               count++;
            } else {
                ans += count * (count + 1) / 2  % MOD;
                count = 0;
            }
        }

        if(count != 0) {
            ans += count * (count + 1) / 2  % MOD;
        }

        return ans;
    }
};