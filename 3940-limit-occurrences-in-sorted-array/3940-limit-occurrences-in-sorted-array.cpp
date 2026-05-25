class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>ans;
        int count = 1;
        for(int i=1;i<n;i++) {
            if(nums[i] != nums[i-1]) {
                if(count >= k) {
                    for(int j=0;j<k;j++) {
                        ans.push_back(nums[i-1]);
                    }
                    count = 1;
                } else {
                    for(int j=0;j<count;j++) {
                        ans.push_back(nums[i-1]);
                    }
                    count = 1;
                }
            } else {
                count++;
            }
        }

            if(count >= k) {
                    for(int j=0;j<k;j++) {
                        ans.push_back(nums[n-1]);
                    }
                    count = 1;
                } else {
                    for(int j=0;j<count;j++) {
                        ans.push_back(nums[n-1]);
                    }
                    count = 1;
                }

        return ans;
    }
};