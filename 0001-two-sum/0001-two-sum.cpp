class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>freq;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            int val = nums[i];
            if(freq.find(target - val) != freq.end()) {
                return {i,freq[target-val]};
            }
            freq[nums[i]] = i;
        }
        return {-1};
    }
};