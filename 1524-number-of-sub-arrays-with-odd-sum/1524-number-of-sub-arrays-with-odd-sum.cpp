class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long ans = 0;
        int sum = 0;
        long long MOD = 1000000007;
        int count_even = 1;
        int count_odd = 0;
        for(int x : arr) {
            sum += x;

            if(sum % 2 == 0) {
                ans += count_odd;
                count_even++;
            } else {
                ans += count_even;
                count_odd++;
            }
        }
        return ans % MOD;
    }
};