class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        map<int,int>freq1;
        map<int,int>freq2;
        for(int num:nums1) {
            freq1[num]++;
        }
        for(int num:nums2) {
            freq2[num]++;
        }
        int ans = INT_MAX;
        for(auto it : freq1) {
            if(freq2.find(it.first) != freq2.end() && it.first < ans) {
                ans = it.first;
            }
        }
        if(ans == INT_MAX) {
            return -1;
        }
        return ans;
        
    }
};