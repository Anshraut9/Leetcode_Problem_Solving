class Solution {
public:
    bool hasSameDigits(string s) {
        int n = s.size();
        while(s.size() != 2) {
            string str = "";
            for(int i=1;i<s.size();i++) {
                int val1 = s[i-1] - '0';
                int val2 =  s[i] - '0';
                int res = (val1 + val2) % 10;

                str += to_string(res);
            }
            s = str;
        }

        return s[0] == s[1];
    }
};