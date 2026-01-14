class Solution {
public:
   long long maximumSubarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    int i = 0;
    long long curr_sum = 0, max_sum = 0;
    map<int,int> freq;
    for (int t = 0; t < k; t++) {
        freq[nums[t]]++;
        curr_sum += nums[t];
    }
    if (freq.size() == k)
        max_sum = curr_sum;
    
    int j = k;
    while (j < n) {
        freq[nums[i]]--;
        curr_sum -= nums[i];
        if (freq[nums[i]] == 0)
            freq.erase(nums[i]);

        freq[nums[j]]++;
        curr_sum += nums[j];
        
        if (freq.size() == k) {
            max_sum = max(max_sum, curr_sum);
        }

        i++;
        j++;
    }
    return max_sum;
}
};