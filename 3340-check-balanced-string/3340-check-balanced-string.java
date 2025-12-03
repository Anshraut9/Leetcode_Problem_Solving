class Solution {
    public boolean isBalanced(String num) {
        int n = num.length();
        int even_idx_sum = 0;
        int odd_idx_sum = 0;
        for(int i=0;i<n;i++) {
            if(i % 2 == 0) {
                even_idx_sum += num.charAt(i) - '0';
            } else {
                odd_idx_sum += num.charAt(i) - '0';
            }
        }
       
       if(even_idx_sum == odd_idx_sum) {
        return true;
       } else {
        return false;
       }
    }
}