class Solution {
public:
    bool checkDivisibility(int n) {
        int refer = n;
        int refer_ref = n;
        int sum_val = 0;
        int mul_val = 1;
        while(refer > 0) {
            sum_val += refer % 10;
            refer /= 10;
        }
        while(refer_ref > 0) {
            mul_val *= refer_ref % 10;
            refer_ref /= 10;
        }

        int final_val = sum_val + mul_val;
        return (n%final_val == 0) ? true : false;
    }
};