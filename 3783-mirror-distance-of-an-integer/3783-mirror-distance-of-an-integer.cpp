class Solution {
public:
    int reverse(int num) {
       int ans = 0;
       while(num > 0) {
        int rem = num % 10;
        ans = ans * 10  + rem;
        num/=10;
       }
       return ans;
    }
    int mirrorDistance(int n) {
        return abs(n - reverse(n));
    }
};