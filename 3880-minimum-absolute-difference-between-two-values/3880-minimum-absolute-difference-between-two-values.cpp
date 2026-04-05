class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int n = nums.size();
        int min_diff = INT_MAX;
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(nums[i] == 1 && nums[j] == 2) {
                    min_diff = min(min_diff, abs(i-j));
                }
            }
        }
        if(min_diff == INT_MAX) {
            return -1;
        }
        return min_diff;
    }
};