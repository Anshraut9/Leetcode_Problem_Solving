class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool>ans;
        for(int i=0;i<n;i++) {
            int curr_value = candies[i] + extraCandies;
            int max_ele = *max_element(candies.begin(),candies.end());
            if(curr_value >= max_ele) {
                ans.push_back(true);
            }else {
                ans.push_back(false);
            }
        }
        return ans;
    }
};