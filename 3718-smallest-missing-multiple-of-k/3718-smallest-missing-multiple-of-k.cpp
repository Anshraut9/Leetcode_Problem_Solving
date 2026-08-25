class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>st;
        for(int x : nums) {
            st.insert(x);
        }
        int i=1;
        int n = nums.size();
        if(n==1 && nums[0] != k) {
            return k;
        }
        if(n==1 && nums[0] == k) {
            return 2*k;
        }
        int ans = -1;
        int curr_val;
        while(i <= n) {
            curr_val = k*i;
            if(st.find(curr_val) == st.end()) {
                ans = curr_val;
                break;
            } else {
                i++;
            }
        }
        if(ans == -1) {
            return curr_val + k;
        }
        return ans;
    }
};