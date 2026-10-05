class Solution {
public:
    int minRotations(string s) {
        int ans = 0;
        int n = s.size();
        int current = 0;
        for(int i=0;i<n;i++) {
            int ref = s[i] - '0';
            int result = abs(current - ref);
            current = ref;
            int add_val = min(result,10-result);
            ans += add_val;
        }
        return ans;
    }
};