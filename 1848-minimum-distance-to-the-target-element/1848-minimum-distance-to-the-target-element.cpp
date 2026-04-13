class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n = nums.size();
        int min_val = INT_MAX;
        for(int i=0;i<n;i++) {
            if(nums[i] == target) {
                if(abs(i-start) < min_val) {
                    min_val = abs(i-start);
                }
            }
        }
        return min_val;
    }
};