class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        set<int>st;
        for(int x : nums) {
            st.insert(x);
        }
        sort(nums.begin(),nums.end());

        int first = nums[0];
        int last = nums[n-1];
        for(int i=first;i<=last;i++) {
            if(st.find(i)==st.end()) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};