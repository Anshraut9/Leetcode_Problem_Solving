class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.size();
        vector<int>check(26,0);
        for(int i=0;i<n;i++) {
            char ch = sentence[i];
            check[ch-'a']++;
        }

        for(int i=0;i<check.size();i++) {
            if(check[i] == 0) {
                return false;
            }
        }
        return true;
    }
};