class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n = nums.size();
        int sum_value_one_digit = 0;
        int sum_value_two_digit = 0;
        for(int i=0;i<n;i++) {
            if(nums[i] <= 9) {
               sum_value_one_digit += nums[i];
            } else {
                sum_value_two_digit += nums[i];
            }
        }
        return sum_value_one_digit != sum_value_two_digit;
    }
};