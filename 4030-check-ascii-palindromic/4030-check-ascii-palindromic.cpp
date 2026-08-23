class Solution {
public:
    bool isPalindromic(string s) {
        int n = s.size();
        string check;
        for(int i=0;i<n;i++) {
            int ch_val = int(s[i]);
            string bin_val = bitset<8>(ch_val).to_string();
            check += bin_val;
        }

        string refer_val = check;
        reverse(check.begin(),check.end());
        return refer_val == check;
    }
};