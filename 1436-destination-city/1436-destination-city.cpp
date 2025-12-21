class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,int>source;
        map<string,int>destination;
        int n = paths.size();
        for(int i=0;i<n;i++) {
            source[paths[i][0]]++;
            destination[paths[i][1]]++;
        }

        for(auto it : destination) {
            string val = it.first;
            if(source.find(val) == source.end()) {
                return val;
            }
        }
        return "";
    }
};