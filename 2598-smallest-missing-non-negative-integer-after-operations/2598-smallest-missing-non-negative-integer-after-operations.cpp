class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        int n = nums.size();
        vector<int>count(value,0);
        for(int num : nums) {
            int rem = ((num % value) + value) % value;
            count[rem]++;
        }
        int ans = 0;
        while(true) {
            int rem = ans % value;
            if(count[rem] == 0) {
                break;
            }
            count[rem]--;
            ans++;
        }
        return ans;
    }
};