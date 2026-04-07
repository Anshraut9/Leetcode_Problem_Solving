class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        if(n==1) {
            return 0;
        }
        for(int i=0;i<n-1;i++) {
            int val = nums[i];
            int sum_val = 0;
            int count = 0;
            for(int j=i+1;j<n;j++) {
               sum_val += nums[j];
               count++;
            }

            float res = sum_val / count;
            if (val > res) {
                ans++;
            }
        }
        return ans;
    }
};