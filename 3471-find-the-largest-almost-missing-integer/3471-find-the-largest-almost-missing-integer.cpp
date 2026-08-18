class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        int n = nums.size();
        for(int i=0;i<=n-k;i++) {
            for(int j=i;j<i+k;j++) {
                freq[nums[j]]++;
            }
        }
        if(n==k) {
            return *max_element(nums.begin(),nums.end());
        }

        int ans = -1;
        for(auto it : freq) {
            if(it.second == 1 && ans < it.first) {
                ans = it.first;
            }
        }
        return ans;
    }
};