class Solution {
public:
    string reversePrefix(string s, int k) {
        // if(k==s.size()) {
        //     reverse(s.begin(),s.end());
        //     return s;
        // }
        // for(int i=1;i<k;i++) {
        //     char temp = s[i-1];
        //     s[i-1] = s[i];
        //     s[i] = temp;
        // }
        // return s;

        reverse(s.begin(),s.begin()+k);
        return s;
    }
};