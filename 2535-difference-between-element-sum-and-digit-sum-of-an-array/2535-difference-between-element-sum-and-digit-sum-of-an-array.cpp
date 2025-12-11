class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int sum_element = 0;
        for(int x : nums) {
            sum_element += x;
        }

        int digit_sum = 0;
        for(int i=0;i<n;i++) {
            int ele = nums[i];
            while(ele > 0) {
                int rem = ele % 10;
                digit_sum += rem;
                ele /=10;
            }
        }

        return abs(digit_sum - sum_element);
    }
};