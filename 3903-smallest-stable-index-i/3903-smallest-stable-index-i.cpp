class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        if(n==1) {
            return 0;
        }

        for(int i=0;i<=n-1;i++) {
            int max_val = INT_MIN;
            int min_val = INT_MAX;
            
            for(int j=0;j<=i;j++) {
               max_val = max(max_val,nums[j]);
            }

            for(int l=i;l<n;l++) {
                min_val = min(min_val,nums[l]);
            }

            if(max_val - min_val <= k) {
                return i;
            }
        }
        return -1;
    }
};