class Solution {
public:
    string toHex(int num) {
        if(num == 0) return "0";
        unsigned int n = num;
        string hexchar = "0123456789abcdef";
        string result = "";

        while(n > 0) {
            int rem = n & 15;
            result = hexchar[rem] + result;
            n >>= 4;
        }
        return result;
    }
};