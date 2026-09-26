class Solution {
    public int numSubarrayProductLessThanK(int[] nums, int k) {
        int n = nums.length;
        int count = 0;
        for(int i=0;i<n;i++) {
            long curr = 1;
            for(int j=i;j<n;j++) {
                curr = curr * nums[j];
                if(curr < k) {
                    count++;
                } else {
                    break;
                }
            }
        }
        return count;
    }
}