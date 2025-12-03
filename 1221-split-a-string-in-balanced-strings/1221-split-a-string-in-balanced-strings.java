class Solution {
    public int balancedStringSplit(String s) {
        int check = 0;
        int ans = 0;
        int n = s.length();
        for(int i=0;i<n;i++) {
            if(s.charAt(i) == 'L') {
                check++;
            } else {
                check--;
            }


            if(check == 0) {
                ans++;
            }
        }
        return ans;
    }
}