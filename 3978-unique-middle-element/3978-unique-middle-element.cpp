class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int middle = nums[n/2];
        if(n==1) {
            return true;
        }
        for(int i=0;i<n;i++) {
            if(nums[i] == middle && i != n/2) {
                return false;
            }
        }
        return true;
    }
};