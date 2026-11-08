class Solution {
public:
    long long countValidSubstrings(string s) {
    int n = s.size();
    long long total = 1LL * n * (n + 1) / 2;
    int lastStart = -1;
    long long count = 0;

    for (int i = 0; i < n; i++) {
        if (i >= 2 && s[i-2] == 'a' &&
            s[i-1] == 'b' && s[i] == 'c') {
            lastStart = i - 2;
        }

        count += lastStart + 1;
    }

    return total - count;
    }
};