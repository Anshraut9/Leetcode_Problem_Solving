class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>freq;
        int ans = 0;
        int i=0,j=0;
        int n = s.size();
        while(j<n) {
            freq[s[j]]++;
            while(freq[s[j]] > 2) {
                freq[s[i]]--;
                i++;
            }
            ans = max(ans, j-i+1);
            j++;
        }
        return ans;

    }
};