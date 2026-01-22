class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            bool found = false;
            for(int j=0;j<nums[i];j++) {
               if((j | (j + 1)) == nums[i]) {
                found = true;
                ans.push_back(j);
                break;
               }
            }
            if(found == false) {
                ans.push_back(-1);
            }
        }
        return ans;
    }
};