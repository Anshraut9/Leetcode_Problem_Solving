class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        int max_ans = INT_MIN;
        for(int i=1;i<n;i++) {
            int count_left_zero = count(s.begin(), s.begin() + i, '0');
            int count_right_one = count(s.begin() + i, s.end(),'1');

            int curr_val = count_left_zero + count_right_one;
            max_ans = max(max_ans,curr_val);
        }
        return max_ans;
    }
};