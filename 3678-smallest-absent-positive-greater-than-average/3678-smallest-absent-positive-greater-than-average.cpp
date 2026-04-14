class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int n = nums.size();
        double avg_value = 0;
        set<int>st;
        for(int i=0;i<n;i++) {
            avg_value += nums[i];
            st.insert(nums[i]);
        }
        avg_value /= n;
        int ans = max(1, (int)floor(avg_value)+1);
        while(st.find(ans) != st.end()) {
           ans++;
        }
        return ans;
    }
};