class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>prefix_index;
        int sum = 0;
        int max_len = 0;
        prefix_index[0] = -1;

        for(int i=0;i<n;i++) {
           sum += (nums[i] == 0) ? -1 : 1;

           if(prefix_index.find(sum) != prefix_index.end()) {
              max_len = max(max_len , i-prefix_index[sum]);
           } else {
              prefix_index[sum] = i;
           }
        } 
        return max_len;
    }
};