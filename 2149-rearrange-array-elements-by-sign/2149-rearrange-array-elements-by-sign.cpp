class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>pos_array;
        vector<int>neg_array;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] > 0) {
                pos_array.push_back(nums[i]);
            } else {
                neg_array.push_back(nums[i]);
            }
        }

        vector<int>ans;
        for(int i=0;i<pos_array.size();i++) {
           ans.push_back(pos_array[i]);
           ans.push_back(neg_array[i]);
        }
        return ans;
    }
};