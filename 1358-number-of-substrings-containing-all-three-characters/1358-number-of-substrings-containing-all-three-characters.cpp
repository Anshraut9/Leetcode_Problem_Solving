class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int count = 0;
        int start = 0;
        unordered_map<char,int>freq;
        for(int i=0;i<n;i++) {
            freq[s[i]]++;
            while(freq['a'] > 0 && freq['b'] > 0 && freq['c'] > 0) {
                count += (n-i);
                freq[s[start]]--;
                start++;
            }
        }
        return count;
    }
};