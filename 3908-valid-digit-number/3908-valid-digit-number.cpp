class Solution {
public:
    bool validDigit(int n, int x) {
        if(n <= 9  && n!=x) {
            return false;
        }

        bool flag = false;
        int start = -1;
        while(n > 0) {
            int rem = n % 10;
            start = rem;
            if(rem == x) {
                flag = true;
            }
            n/=10;
        }

       return (start != x && flag);
    }
};