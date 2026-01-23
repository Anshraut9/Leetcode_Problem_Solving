class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == 0) return n;
        if (k >= n) return 0;
        sort(nums.begin(), nums.end());
        int count = 0;
        for (int i = 0; i < n; i++) {
            int idx = upper_bound(nums.begin(), nums.end(), nums[i]) - nums.begin();
            int greaterCount = n - idx;
            if (greaterCount >= k) {
                count++;
            }
        }
        return count;
    }
};