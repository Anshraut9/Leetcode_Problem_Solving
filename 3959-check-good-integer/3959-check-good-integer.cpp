class Solution {
public:
    bool checkGoodInteger(int n) {
        long long dig_sum = 0;
        long long sq_sum = 0;

        while(n > 0) {
            int rem = n%10;
            dig_sum += rem;
            sq_sum += pow(rem,2);
            n/=10;
        }

        return (abs(sq_sum - dig_sum >= 50) ? true : false);
    }
};