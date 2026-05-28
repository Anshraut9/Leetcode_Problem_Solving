class Solution {
public:
    string capitalizeTitle(string title) {
        int n = title.size();
        string str = "";
        string ans = "";
        for(int i=0;i<n;i++) {
            if(title[i] == ' ' && (str.size() > 2)) {
                str[0] = toupper(str[0]);
                ans += str;
                ans += ' ';
                str = "";
            } else if(title[i] == ' ' && (str.size() <= 2)) {
                ans += str;
                ans += ' ';
                str = "";
            } else {
                str += tolower(title[i]);
            }
        }

        if(!str.empty()) {
            if(str.size() > 2) {
                str[0] = toupper(str[0]);
                ans += str;
                str = "";
            } else {
                ans += str;
                str = "";
            }
        }
        return ans;
    }
};