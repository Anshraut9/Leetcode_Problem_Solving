class Solution {
public:
    string ans = "";

    void generate(int idx,int n,string &curr,set<string>&st) {
        if(!ans.empty()) {
            return;
        }

        if(curr.size() == n) {
            if(st.find(curr) == st.end()) {
                ans = curr;
            }
            return;
        }

        curr.push_back('0');
        generate(idx+1,n,curr,st);
        curr.pop_back();

        curr.push_back('1');
        generate(idx+1,n,curr,st);
        curr.pop_back();
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        set<string>st(nums.begin(),nums.end());
        string curr = "";
        generate(0,n,curr,st);
        return ans;
    }
};