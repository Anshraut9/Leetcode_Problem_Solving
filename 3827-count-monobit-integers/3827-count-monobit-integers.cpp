class Solution {
public:
    bool check_monobit(int num) {
        int ones = 0;
        int zeros = 0;
        int x = num;
        while(x > 0) {
            int rem = x%2;
            if(rem == 1) {
                ones++;
            } else {
                zeros++;
            }

            x/=2;
        }
        if((zeros == 0 && ones == 0) || (zeros == 0) || (ones == 0)) {
            return true;
        }
        return false;
    }
    int countMonobit(int n) {
        if(n==1) {
            return 2;
        }
        int count = 0;
        for(int i=0;i<=n;i++) {
            if(check_monobit(i)) {
                count++;
            } 
        }
        return count;
    }
};