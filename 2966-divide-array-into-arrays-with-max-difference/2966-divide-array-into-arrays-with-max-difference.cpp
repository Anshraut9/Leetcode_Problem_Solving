class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int individual_size = n/3;
        for(int i=2;i<n;i+=3) {
            vector<int>refer;
            if((nums[i] - nums[i-1]) > k || (nums[i-1] - nums[i-2]) > k ||
               (nums[i] - nums[i-2]) > k) {
                   return {};
               } else {
                refer.push_back(nums[i-2]);
                refer.push_back(nums[i-1]);
                refer.push_back(nums[i]);
               }

            ans.push_back(refer);
        }
        return ans;
    }
};