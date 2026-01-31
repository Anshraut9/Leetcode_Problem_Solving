class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        for(int i=0;i<n-1;i+=2) {
            int freq = nums[i];
            int val = nums[i+1];
            while(freq > 0) {
                ans.push_back(val);
                freq--;
            }
        } 
        return ans;
    }
};