class Solution {
public:
    int find_val(int number,int digit) {
        int dig_count = 0;
        while(number > 0) {
            int rem = number % 10;
            if(rem == digit) {
                dig_count++;
            }
            number /= 10;
        }
        return dig_count;
    }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            int num = find_val(nums[i],digit);
            count += num;
        }
        return count;
    }
};