class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();

        int ans = 0;
        for(int i=0;i<n;i++) {
            sort(nums[i].begin(),nums[i].end(),greater<int>());
        }
            for(int col = 0;col<m;col++) {
                int val = 0;
                for(int row = 0;row<n;row++) {
                    val = max(val,nums[row][col]);
                }
                ans += val;
            }
        return ans;
    }
};