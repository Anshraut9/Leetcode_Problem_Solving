class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = words.size();
        int m = pref.size();
        int ans = 0;
        for(int i=0;i<n;i++) {
            string curr = words[i];
            int count = 0;
            
            for(int j=0;j<m;j++) {
                if(curr.size() < m) {
                    break;
                }
                if(curr[j] == pref[j]) {
                    count++;
                }
            }
            if(count == m) {
                ans++;
            }
        }
        return ans;
    }
};