class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int>sum_left(n,-1);
        vector<int>sum_right(n,-1);
        sum_left[0] = nums[0];
        sum_right[n-1] = nums[n-1];
        for(int i=1;i<n;i++) {
           sum_left[i] = sum_left[i-1] + nums[i];
        }
        for(int i=n-2;i>=0;i--) {
            sum_right[i] = sum_right[i+1] + nums[i];
        }

        for(int i=0;i<n;i++) {
            if(sum_left[i] == sum_right[i]) {
                return i;
            }
        }
        return -1;
    }
};