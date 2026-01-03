class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<int,int>freq;
        for(int i=0;i<nums.size();i++) {
            freq[nums[i]]++;
        }
        int count = 0;
        for(auto it : freq) {
            if(k==0) {
                if(it.second > 1) {
                   count++;
                }
            }
            else {
                int ele = (it.first + k);
                if(freq.find(ele) != freq.end()) {
                   count++;
                }
            }
        }
        return count;
    }
};