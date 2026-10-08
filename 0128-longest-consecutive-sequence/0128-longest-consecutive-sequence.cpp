class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        int n = nums.size();
        int ans = 0;
        for(auto &it : nums) {
            st.insert(it);
        }
        for(int i=0;i<n;i++) {
            int val = nums[i];
            if(st.find(val) != st.end() && st.find(val-1) == st.end()) {

                int curr = val;
                int count = 0;
                while(st.find(curr) != st.end()) {
                    st.erase(curr);
                    curr++;
                    count++;
                }
                ans = max(ans,count);
            }
        }
        return ans;
    }
};