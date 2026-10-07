class Solution {
public:
    void solve(vector<int>& nums,int idx, vector<int>&res,vector<vector<int>>&ans) {
        if(idx == nums.size()) {
            ans.push_back(res);
            return;
        }
        res.push_back(nums[idx]); 
        solve(nums,idx+1,res,ans);
        res.pop_back();
        solve(nums,idx+1,res,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>res;
        int idx = 0;
        solve(nums,idx,res,ans);
        return ans;
    }
};