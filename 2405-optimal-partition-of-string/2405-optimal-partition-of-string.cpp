class Solution {
public:
    int partitionString(string s) {
        int n = s.size();
        vector<string>ans;
        string str = "";
        for(int i=0;i<n;i++) {
            char ch = s[i];
            if(str.find(ch) == string::npos) {
                str += ch;
            } else {
                ans.push_back(str);
                str = ch;
            }
        }
        if(!str.empty()) {
            ans.push_back(str);
        }
        return ans.size();
    }
};