class Solution {
    public int countPartitions(int[] nums) {
        int n = nums.length;
        int count = 0;
        for(int i=0;i<n-1;i++) {
            int l_sum = 0;
            int r_sum = 0;

            for(int j=0;j<i+1;j++) {
                l_sum += nums[j];
            }
            for(int k=i+1;k<n;k++) {
                r_sum += nums[k];
            }

            if((l_sum % 2 == 0 && r_sum % 2 == 0) || (l_sum % 2 != 0  && r_sum % 2 != 0)) {
                count++;
            }
        }
        return count;
    }
}