class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int sum_res = 0;
        for(int i=0;i<n;i++) {
            sum_res += nums[i];
        }
        return sum_res % k;
    }
};