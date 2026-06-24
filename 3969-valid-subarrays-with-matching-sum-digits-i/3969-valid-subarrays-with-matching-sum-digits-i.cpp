class Solution {
public:
    int firstDigit(long long num) {
    while(num >= 10) {
        num /= 10;
    }
    return num;
}
int countValidSubarrays(vector<int>& nums, int x) {
    int n = nums.size();
    vector<long long> prefix(n + 1, 0);
    for(int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + nums[i];
    }
    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            long long sum_val = prefix[j + 1] - prefix[i];
            int first_val = firstDigit(sum_val);
            int last_val = sum_val % 10;
            if(first_val == x && last_val == x) {
                count++;
            }
        }
    }
    return count;
    }
};