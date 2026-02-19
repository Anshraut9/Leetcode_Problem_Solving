class Solution {
public:
    int thirdMax(vector<int>& nums) {
       int n = nums.size();
    if (n < 3) {
        auto maxElement = max_element(nums.begin(), nums.end());
        return *maxElement;
    }
    
    sort(nums.begin(), nums.end(), greater<int>());
    
    int distinctCount = 1;
    int prev = nums[0];
    for (int i = 1; i < n; ++i) {
        if (nums[i] != prev) {
            distinctCount++;
            prev = nums[i];
        }
        if (distinctCount == 3) {
            return nums[i];
        }
    }
    
    return nums[0];
    }
};