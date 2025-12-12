class Solution {
public:
    int minimumSum(int num) {
        vector<int>nums;
        while(num > 0) {
            int rem = num % 10;
            nums.push_back(rem);
            num /= 10;
        }
        sort(nums.begin(),nums.end());
        int first = nums[0] * 10 + nums[3];
        int second = nums[1] * 10 + nums[2];

        return first + second;
    }
};