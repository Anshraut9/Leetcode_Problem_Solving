class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i=0;i<n;i++) {
            int count = 0;
             set<int>st_odd;
             set<int>st_even;
            for(int j=i;j<n;j++) {
                if(nums[j] % 2 == 0) {
                    st_even.insert(nums[j]);
                } else {
                    st_odd.insert(nums[j]);
                }

                if(st_odd.size() == st_even.size()) {
                    count = j-i+1;
                } 
            }

            ans = max(ans,count);
        }
        return ans;
    }
};