class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) {
            return nums;
        }
        vector<int>prefix(n,-1);
        vector<int>suffix(n,-1);
        vector<int>ans;
        prefix[0] = nums[0];
        int max_left = nums[0];
        suffix[n-1] = nums[n-1];
        int max_right = nums[n-1];

        for(int i=1;i<n;i++) {
           if(nums[i] > max_left) {
              max_left = nums[i];
              prefix[i] = nums[i];
           }
        }

        for(int i=n-2;i>=0;i--) {
           if(nums[i] > max_right) {
              max_right = nums[i];
              suffix[i] = nums[i];
           }
        }
        int break_idx = 0;
        for(int i=0;i<n;i++) {
            if(prefix[i] != -1) {
                ans.push_back(prefix[i]);
                break_idx = i;
            }
        }
        
        if(break_idx != n-1) {
        for(int j=break_idx+1;j<n;j++) {
            if(suffix[j] != -1) {
                ans.push_back(suffix[j]);
            }
        }
        }
        return ans;
    }
};