class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int n = s.size();
        map<char,int>freq;
        for(int i=0;i<n;i++) {
            freq[s[i]] = i;
        }

        int count = 0;
        for(int j=0;j<t.size();j++) {
            char ch = t[j];
            if(freq.find(ch) != freq.end()) {
                count += abs(j - freq[t[j]]);
            }
        }
        return count;
    }
};