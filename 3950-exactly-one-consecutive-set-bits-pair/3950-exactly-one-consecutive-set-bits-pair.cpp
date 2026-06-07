class Solution {
public:
    bool consecutiveSetBits(int n) {
        int prev = 0;
        int count = 0;
        while(n > 0) {
            int rem = n % 2;
            if(rem == 1 && prev == 1) {
                count++;
            }
            prev = rem;
            n/=2;
        }
        return (count == 1) ? true : false;
    }
};