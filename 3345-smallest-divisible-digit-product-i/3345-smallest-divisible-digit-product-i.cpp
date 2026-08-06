class Solution {
public:
    int smallestNumber(int n, int t) {
        int refer = n;
        bool found = false;
        int ans;
        while(found != true) {
            ans = refer;
            int number = refer;
            int mul_val = 1;
            while(number > 0) {
              int rem = number % 10;
              mul_val = mul_val * rem;
              number /= 10;
            }

            if(mul_val % t == 0) {
                found = true;
            }
            refer++;
        }
        return ans;
    }
};