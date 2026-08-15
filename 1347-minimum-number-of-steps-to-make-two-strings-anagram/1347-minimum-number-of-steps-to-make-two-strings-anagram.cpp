class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>freq(26,0);
        int n = s.size();
        for(int i=0;i<n;i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        int count = 0;
        for(int i=0;i<freq.size();i++) {
            if(freq[i] > 0) {
                count += freq[i];
            }
        }
        return count;
    }
};