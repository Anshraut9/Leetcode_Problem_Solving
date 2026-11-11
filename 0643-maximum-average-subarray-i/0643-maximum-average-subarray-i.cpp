class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double curr_value = 0;
        for(int i=0;i<k;i++) {
            curr_value += nums[i];
        }
        double ans = (curr_value / k);
        for(int i=0;i+k<n;i++) {
            curr_value = (curr_value - nums[i]) + nums[i+k];
            double refer = (curr_value / k);
            ans = max(ans,refer);
        }
        return ans;
    }
};