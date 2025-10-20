class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>st1;
        set<int>st2;

        for(int num : nums1) {
            st1.insert(num);
        }

        for(int val : nums2) {
            st2.insert(val);
        }

        vector<vector<int>>ans;
        vector<int>check1;
        for(auto it : st1) {
            if(st2.find(it) == st2.end())  {
                check1.push_back(it);
            }
        }
        ans.push_back(check1);

        vector<int>check2;
        for(auto it : st2) {
            if(st1.find(it) == st1.end()) {
                check2.push_back(it);
            }
        }
        ans.push_back(check2);

        return ans;
    }
};