class Solution {
public:
    int countAsterisks(string s) {
        int ans = 0;
        bool inside = false;
        for(char ch : s) {
            if(ch == '|') {
                inside = !inside;
            }
            else if(ch == '*' && !inside) {
                ans++;
            }
        }

        return ans;
    }
};