class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        unsigned long long ans = 0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=n-1;i>=0;i--) {
            if(k==0) {
                break;
            }

            if(mul > 0) {
                ans += (1LL * nums[i] * mul);
                mul--;
            }
            else if(mul <= 0) {
                ans += (nums[i]);
            }

            k--;
        }
        return ans;
    }
};