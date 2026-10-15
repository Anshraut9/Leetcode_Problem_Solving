class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int n = nums.size();
        int max_prod = INT_MIN;
        vector<int>ans;
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if((i != j)  && (nums[i] + nums[j] == target) && (nums[i] > nums[j])) {
                    int curr_prod = nums[i] * nums[j];
                    if(curr_prod > max_prod) {
                        max_prod = curr_prod;
                        if(ans.empty()) {
                            ans.push_back(i);
                            ans.push_back(j);
                        } else {
                            ans.pop_back();
                            ans.pop_back();
                            ans.push_back(i);
                            ans.push_back(j);
                        }
                    }
                }
            }
        }
        if(ans.empty()) {
            return {-1,-1};
        }
        return ans;
    }
};