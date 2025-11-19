class Solution {
public:
    bool hasAlternatingBits(int n) {
        string str = "";
        while(n > 0) {
            int rem = n % 2;
            str += rem + '0';
            n/=2;
        }

        reverse(str.begin(),str.end());

        int m = str.size();
        for(int i=1;i<m;i++) {
            if((str[i] == '1' && str[i-1] == '1') || str[i] == '0' && str[i-1] == '0') {
                return false;
            }
        }
        return true;
    }
};