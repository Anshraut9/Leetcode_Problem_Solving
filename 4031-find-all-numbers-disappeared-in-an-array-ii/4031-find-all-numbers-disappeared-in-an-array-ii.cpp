class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        int n = nums.size();
        vector<int>ans;
        set<int>st;
        for(int x : nums) {
            st.insert(x);
        }
        for(int i=lower;i<=upper;i++) {
            if(st.find(i) == st.end()) {
                ans.push_back(i);
            }
        }
        
        vector<vector<int>>result;
        if(ans.empty()) {
            return result;
        }
        int start = ans[0];
        for(int i = 1; i < ans.size(); i++) {
        if(ans[i] != ans[i-1] + 1) {
            result.push_back({start, ans[i-1]});
            start = ans[i];
        }
    }

    // Add the last range
    result.push_back({start, ans.back()});

    return result;

    }
};