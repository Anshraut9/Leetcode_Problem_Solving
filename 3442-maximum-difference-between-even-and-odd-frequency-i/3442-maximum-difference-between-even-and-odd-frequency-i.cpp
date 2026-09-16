class Solution {
public:
    int maxDifference(string s) {
        map<char,int>freq;
        for(char ch : s) {
            freq[ch]++;
        }
        int max_freq = INT_MIN;
        int min_freq = INT_MAX;
        for(auto &it : freq) {
            if(it.second % 2 == 0) {
                min_freq = min(min_freq,it.second);
            } else {
                max_freq = max(max_freq,it.second);
            }
        }
        return max_freq - min_freq;
    }
};