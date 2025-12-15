class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int n = nums.size() - 1;
        while(ans.size() != k && n>=0) {
            if(!ans.empty() && ans.back() == nums[n]) {
                n--;
            } else {
               ans.push_back(nums[n]);
               n--;
            }
        }
        return ans;
    }
};