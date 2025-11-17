class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int>freq;
        for(int i=0;i<n;i++) {
            if(nums[i] == 1) {
               if(freq.find(1) != freq.end()) {
                  if(i - freq[1] - 1   <  k) {
                    return false;
                  }
               }
                freq[nums[i]] = i;
            }
        }
        return true;
    }
};