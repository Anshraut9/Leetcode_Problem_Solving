class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int n = s.size();
        for(int i=1;i<n;i++) {
            int first_val = s[i-1] - '0';
            int second_val = s[i] - '0';

            if((abs(first_val - second_val)) > 2) {
                return false;
            }
        }
        return true;
    }
};