class Solution {
    public int[] concatWithReverse(int[] nums) {
        int n = nums.length;
        int[] ans = new int[2*n];
        int idx = 0;
        for(int i=0;i<n;i++) {
            ans[i] = nums[i];
            idx = i;
        }
        for(int j=n-1;j>=0;j--) {
            ans[idx+1] = nums[j];
            idx++;
        }
        return ans;
    }
}