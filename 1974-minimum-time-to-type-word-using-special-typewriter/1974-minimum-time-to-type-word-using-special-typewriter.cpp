class Solution {
public:
    int minTimeToType(string word) {
        int ans = 0;
        int n = word.size();
        char curr = 'a';
        for(int i=0;i<n;i++) {
            int differ = abs(curr - word[i]);
            ans += min(differ,26-differ);
            ans += 1;
            curr = word[i];
        }
        return ans;
    }
};