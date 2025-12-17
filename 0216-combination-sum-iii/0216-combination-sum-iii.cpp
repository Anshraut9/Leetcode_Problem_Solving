class Solution {
public:
    void solve(vector<int>&arr,vector<int>&comb,int target,int k,int idx,
            vector<vector<int>>&ans,set<vector<int>>&st) {
        
        if(target == 0 && comb.size() == k) {
            if(st.find(comb) == st.end()) {
                ans.push_back(comb);
                st.insert(comb);
            }
            return;
        }

        if(idx >= arr.size() || target < 0 || comb.size() > k) {
            return;
        }
        
        comb.push_back(arr[idx]);
        solve(arr,comb,target-arr[idx],k,idx+1,ans,st);
        comb.pop_back();
        solve(arr,comb,target,k,idx+1,ans,st);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>arr = {1,2,3,4,5,6,7,8,9};
        int target = n;
        vector<vector<int>>ans;
        vector<int>comb;
        set<vector<int>>st;
        solve(arr,comb,target,k,0,ans,st);
        return ans;
    }
};