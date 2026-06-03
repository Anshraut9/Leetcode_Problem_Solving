class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int min_sum = INT_MAX;
        for(int i=0;i<n;i++) {
            int curr_sum = 0;
            for(int j=i;j<n;j++) {
                curr_sum += nums[j];

                if(curr_sum > 0  && ((j-i+1 >= l) && (j-i+1 <= r))) {
                    min_sum = min(curr_sum,min_sum);
                }
            }
        }
        if(min_sum == INT_MAX) {
            return -1;
        }
        return min_sum;
    }
};