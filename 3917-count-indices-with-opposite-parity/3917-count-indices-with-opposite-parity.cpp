class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size();
        if(n==1) {
            return {0};
        }
        vector<int>ans;
        for(int i=0;i<n;i++) {
            int curr = nums[i];
            int res = 0;
            if(curr % 2 == 0) {
                for(int j=i;j<n;j++) {
                    if(nums[j] % 2 != 0) {
                        res++;
                    }
                }
                ans.push_back(res);
            } else {
                for(int j=i;j<n;j++) {
                    if(nums[j] % 2 == 0) {
                        res++;
                    }
                }
                ans.push_back(res);
            }
            res = 0;
        }
        return ans;
    }
};