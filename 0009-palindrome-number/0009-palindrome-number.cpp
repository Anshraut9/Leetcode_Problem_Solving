class Solution {
public:
    bool isPalindrome(int x) {
        int refer = x;
        unsigned long long rko = 0;
        while(refer > 0) {
            int rem = refer % 10;
            rko = rko*10 + rem;
            refer /= 10;
        }
        if(x < 0) {
            rko = rko* (-1);
        }

        return rko == x;
    }
};