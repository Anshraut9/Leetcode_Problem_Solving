class Solution {
public:
    long long removeZeros(long long n) {
        long long ans = 0;
        string str = to_string(n);
        for(int i=0;i<str.size();i++) {
            if(str[i] != '0') {
                int num = (str[i] - '0');
                ans = ans*10 + num;
            }
        }
        return ans;
    }
};