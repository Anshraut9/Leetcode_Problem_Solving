class Solution {
public:
    set<vector<int>>s;
    void solve(int i,vector<int>&nums,vector<int>&comb,vector<vector<int>>&subset) {
        if(i==nums.size()) {
            if(s.find(comb)==s.end()) {
              subset.push_back(comb);
              s.insert(comb);
            }
            return;
        }
        comb.push_back(nums[i]);
        solve(i+1,nums,comb,subset);
        comb.pop_back();
        solve(i+1,nums,comb,subset);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>subset;
        vector<int>comb;
        sort(nums.begin(),nums.end());
        solve(0,nums,comb,subset);
        return subset;
    }
};