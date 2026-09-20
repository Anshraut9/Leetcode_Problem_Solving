class Solution {
public:
    int reverseDegree(string s) {
        long long ans = 0;
        int n = s.size();
        for(int i=0;i<n;i++) {
            int idx = i+1;
            int val = ('a' - s[i]) + 26;
            long long refer = val * idx;
            ans += refer;
        }
        return ans;
    }
};