class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max_ele = *max_element(nums.begin(),nums.end());
        int ans = 0;
        for(int x : nums) {
            ans += abs(max_ele - x);
        }
        return ans;
    }
};