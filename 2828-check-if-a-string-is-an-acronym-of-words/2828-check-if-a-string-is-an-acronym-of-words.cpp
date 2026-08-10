class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int n = words.size();
        string refer = "";
        for(int i=0;i<n;i++) {
            string curr = words[i];
            refer += curr[0];
        }
        return (s == refer) ? true : false;
    }
};