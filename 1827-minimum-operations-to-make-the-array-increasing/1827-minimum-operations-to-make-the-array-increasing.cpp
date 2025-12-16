class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int operations = 0;
        if(n == 1) {
            return 0;
        }
        for(int i=1;i<n;i++) {
            if(nums[i] > nums[i-1]) {
                continue;
            } else {
                int num = abs(nums[i] - nums[i-1]) + 1;
                operations += num;
                nums[i] += num;
            }
        }
        return operations;
    }
};