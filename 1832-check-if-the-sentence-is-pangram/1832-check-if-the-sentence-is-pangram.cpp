class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>check(26,0);
        for(char ch : sentence) {
            check[ch - 'a'] = 1;
        }
        for(int i=0;i<26;i++) {
            if(check[i] != 1) {
                return false;
            }
        }
        return true;
    }
};