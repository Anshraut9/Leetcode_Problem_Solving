class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int new_sz = 2*n;
        vector<int>ans(new_sz,-1);
        for(int i=0;i<n;i++) {
            ans[i] = nums[i];
            ans[i+n] = nums[i];
        }

        return ans;
    }
};