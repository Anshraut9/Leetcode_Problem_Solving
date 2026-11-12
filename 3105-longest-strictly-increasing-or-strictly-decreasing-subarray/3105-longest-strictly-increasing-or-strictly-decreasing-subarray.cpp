class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int incr = 1;
        int max_incr = 1;
        int decr = 1;
        int max_decr = 1;
        for(int i=0;i<n-1;i++) {
            if(nums[i] < nums[i+1]) {
                incr++;
            } else {
                max_incr = max(max_incr,incr);
                incr = 1;
            }
        }

        for(int i=0;i<n-1;i++) {
            if(nums[i] > nums[i+1]) {
                decr++;
            } else {
                max_decr = max(max_decr,decr);
                decr = 1;
            }
        
        }
        max_incr = max(max_incr,incr);
        max_decr = max(max_decr,decr);
        return max(max_incr,max_decr);
    }
};