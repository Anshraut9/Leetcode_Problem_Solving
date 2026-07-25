class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int n = words.size();
        string ans;
        for(int i=0;i<n;i++) {
            string str = words[i];
            unsigned long long curr_val = 0;
            for(int j=0;j<str.size();j++) {
                curr_val += (weights[str[j] - 'a']);
            }
            int res = curr_val % 26;
            ans += 'z' - res;
        }
        return ans;
    }
};