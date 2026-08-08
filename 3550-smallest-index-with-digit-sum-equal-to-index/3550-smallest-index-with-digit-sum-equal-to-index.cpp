class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++) {
            int number = nums[i];
            int sum = 0;
            while(number > 0) {
                int rem = number % 10;
                sum += rem;
                number /= 10;
            }
            if(sum == i) {
                return i;
            }
        }
        return -1;
    }
};