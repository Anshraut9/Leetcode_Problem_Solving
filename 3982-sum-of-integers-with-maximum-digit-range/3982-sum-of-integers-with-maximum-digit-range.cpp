class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int,int>>digit_range;
        int max_till = INT_MIN;
        for(int i=0;i<n;i++) {
            int value = nums[i];
            int min_val = INT_MAX;
            int max_val = INT_MIN;
            while(value > 0) {
                int rem = value % 10;
                min_val = min(min_val,rem);
                max_val = max(max_val,rem);
                value /= 10;
            }
            max_till = max(max_till, max_val - min_val);
            digit_range.push_back(make_pair(i, max_val - min_val));
        }

        int ans = 0;
        for(int i=0;i<n;i++) {
            if(digit_range[i].second == max_till) {
                ans += nums[digit_range[i].first];
            }
        }
        return ans;

    }
};